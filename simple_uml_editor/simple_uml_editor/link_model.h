#ifndef LINK_MODEL_H
#define LINK_MODEL_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsLineItem>
#include <QPen>
#include "enum.h"
#include "baselink.h"
#include "baseobject.h"
class UMLgraphicscene;

class link_model
{
public:
	link_model();
	void mouse_press(QGraphicsItem *begin_item,QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene);
	void mouse_move(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene);
	void mouse_release(QGraphicsItem *end_item,QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene,Link link);
private:
	baseobject *_begin_item;
	QGraphicsLineItem *guideLine;

};


#endif