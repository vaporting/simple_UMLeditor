#include "select_model.h"
#include "UMLgraphicscene.h"
#include <QGraphicsSceneMouseEvent>

select_model::select_model()
{
	guideRect = NULL;
}

void select_model::mouse_press(QGraphicsItem *select_item,QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene)
{
	QList< QGraphicsItem * > selected(pscene->selectedItems());
	std::for_each( selected.begin(), selected.end(), []( QGraphicsItem * item_ )->void {
		item_->setSelected( false );} );
	guideRect = new QGraphicsRectItem( QRectF( evt->scenePos(), QSizeF() ) );
	beginDragPoint=evt->scenePos();  
	QPen pen(guideRect->pen());
	pen.setColor(Qt::red);
	pen.setStyle( Qt::DotLine );
	guideRect->setPen( pen );
	pscene->addItem(guideRect);
}

void select_model::mouse_move(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene)
{
	QRectF rect(beginDragPoint,evt->scenePos());
	guideRect->setRect(rect.normalized());
}

void select_model::mouse_release(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene)
{
	pscene->setSelectionArea( guideRect->mapToScene( guideRect->shape() )
		, Qt::ContainsItemBoundingRect
		, QTransform() );
	pscene->removeItem(this->guideRect);
	delete guideRect;
	guideRect = NULL;
}

QGraphicsRectItem* select_model::get_guideRect()
{
	return guideRect;
}