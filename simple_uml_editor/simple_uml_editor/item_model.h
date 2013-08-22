#ifndef ITEM_MODEL_H
#define ITEM_MODEL_H

#include <QGraphicsSceneMouseEvent>
#include "enum.h"
class UMLgraphicscene;
#include "baseobject.h"

class item_model
{
public:
	item_model();
	~item_model();
	void mouse_press(QGraphicsSceneMouseEvent *evt, UMLgraphicscene *, Item item);
private:
	baseobject *object;
};



#endif