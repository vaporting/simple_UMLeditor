#ifndef SELECT_MODEL_H
#define SELECT_MODEL_H

#include <QGraphicsItem>
#include <QSet>
#include <QColor>
#include <QPainter>
#include <QGraphicsScene>
class UMLgraphicscene;
class QGraphicsSceneMouseEvent;

class select_model
{
public:
    select_model();
	void mouse_press(QGraphicsItem *select_item,QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene);
	void mouse_move(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene);
	void mouse_release(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene);
	QGraphicsRectItem* get_guideRect();

private:
	QGraphicsRectItem *guideRect;
	QPointF beginDragPoint;
};


#endif