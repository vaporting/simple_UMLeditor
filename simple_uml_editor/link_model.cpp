#include "link_model.h"
#include "UMLgraphicscene.h"
#include "create_link.h"
#include "near_node.h"


link_model::link_model()
{
	_begin_item=NULL;
	guideLine=NULL;
}

void link_model::mouse_press(QGraphicsItem *begin_item,QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene)
{
	if(begin_item)
	{
	_begin_item=dynamic_cast<baseobject*>(begin_item);
	guideLine = new QGraphicsLineItem(QLineF( evt->scenePos(), evt->scenePos()));
	guideLine->setZValue( -1000 );
	QPen pen(guideLine->pen());
	pen.setColor(Qt::red);
	pen.setStyle(Qt::DotLine);
	guideLine->setPen(pen);
	pscene->addItem(guideLine);
	}
}

void link_model::mouse_move(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene)
{
	if(guideLine)
		guideLine->setLine(QLineF(guideLine->line().p1(), evt->scenePos()));
}

void link_model::mouse_release(QGraphicsItem *end_item,QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene,Link link)
{
	if(guideLine)
	{
		baseobject *temp_end_item;
		if(end_item!=guideLine)
			temp_end_item = dynamic_cast<baseobject*>(end_item);
		else
			temp_end_item = NULL;
		QPointF begin_pos = guideLine->line().p1();
		pscene->removeItem(guideLine);
		delete guideLine;
		guideLine = NULL;
		if(temp_end_item&&end_item!=_begin_item)
		{
			baselink *cur_link = create_link(link);
			cur_link->set(near_node(begin_pos,_begin_item)
						 ,near_node(evt->scenePos(),temp_end_item));
			pscene->addItem(cur_link);
			_begin_item=NULL;
			cur_link->update_position();
		}
		
	}
}