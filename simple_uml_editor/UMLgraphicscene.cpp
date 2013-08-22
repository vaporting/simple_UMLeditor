#include <QGraphicsItem>
#include <QSet>
#include <QInputDialog>
#include <QGraphicsView>
#include <QString>
#include "UMLgraphicscene.h"
#include "item_model.h"
#include "select_model.h"
#include "link_model.h"
#include "baseobject.h"
#include "ItemGroup.h"

UMLgraphicscene::UMLgraphicscene()
{
	i_model = new item_model();
	s_model = new select_model();
	l_model = new link_model();
}

UMLgraphicscene::~UMLgraphicscene()
{}

void UMLgraphicscene::set_mode(Mode mode)
{
	cur_mode=mode;
}

void UMLgraphicscene::set_item(Item item)
{
	_item=item;
}

void UMLgraphicscene::set_link(Link link)
{
	_link=link;
}

void UMLgraphicscene::change_object_name()
{
	QList< QGraphicsItem * > selected( this->selectedItems() );
	int i;
	for(i=0;i<selected.size();i++)
	{
		baseobject * item = dynamic_cast< baseobject* >(selected.at(i));
		QString item_name = QInputDialog::getText( views().first()
												 , QObject::tr("Change object name")
												 , QObject::tr("Enter a name")
												 , QLineEdit::Normal
												 , QString::null);
		if(!item_name.isEmpty())
			item->setText(item_name);
	}
}

void UMLgraphicscene::group_select_items()
{
	QList< QGraphicsItem *> selected(this->getselectedroots());
	if(selected.size()>1)
	{
		ItemGroup *group = new ItemGroup;
		this->addItem(group);
		group->setSelected(true);
		std::for_each(selected.begin(), selected.end(), [group](QGraphicsItem *item)->void {
			group->addToGroup( item );
		});
	}
}

void UMLgraphicscene::ungroup_select_items()
{
	QList< QGraphicsItem * > selected(this->getselectedroots());
	if(selected.size()==1)
	{
		ItemGroup * group = dynamic_cast<ItemGroup*>( selected.at(0) );
		if(group)
		{
			group->setSelected(false);
			selected = group->childItems();
			this->destroyItemGroup( group );
			std::for_each( selected.begin(), selected.end(), []( QGraphicsItem * item )->void {
				item->setSelected(false);
			} );
		}
	}
}

QList<QGraphicsItem *> UMLgraphicscene::getselectedroots()
{
	QList<QGraphicsItem *> selected(this->selectedItems());
	QSet<QGraphicsItem *> roots;
	int i;
	for(i=0;i<selected.size();i++)
	{
		QGraphicsItemGroup *group=selected.at(i)->group();
		while(group&&group->group())
			group=group->group();
		if(group)
			roots.insert(group);
		else
			roots.insert(selected.at(i));
	}
	return roots.toList();
}

void UMLgraphicscene::mousePressEvent(QGraphicsSceneMouseEvent *evt)
{
	QGraphicsItem *select_item;
	if(evt->button()==Qt::LeftButton)
	{
		if(cur_mode==SELECT)
		{
			select_item = this->itemAt(evt->scenePos());
			if(select_item)
				this->QGraphicsScene::mousePressEvent(evt);
			else
				s_model->mouse_press(select_item,evt,this);
				
		}
		else if(cur_mode==ITEM)
			i_model->mouse_press(evt,this,_item);
		else
		{
			l_model->mouse_press(this->itemAt(evt->scenePos()),evt,this);
		}
	}
	
}

void UMLgraphicscene::mouseMoveEvent(QGraphicsSceneMouseEvent *evt)
{
	if(cur_mode==SELECT)
	{
		if(s_model->get_guideRect())
			s_model->mouse_move(evt,this);
		else
			this->QGraphicsScene::mouseMoveEvent( evt );
	}
	if(cur_mode==LINK)
		l_model->mouse_move(evt,this);
}

void UMLgraphicscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *evt)
{
	if(cur_mode==SELECT)
	{
		if(s_model->get_guideRect())
			s_model->mouse_release(evt,this);
		else
			this->QGraphicsScene::mouseReleaseEvent( evt );
	}
	if(cur_mode==LINK)
		l_model->mouse_release(this->itemAt(evt->scenePos(), QTransform()),evt,this,_link);
}

