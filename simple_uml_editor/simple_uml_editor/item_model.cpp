#include "item_model.h"
#include "UMLgraphicscene.h"
#include "create_object.h"

item_model::item_model()
{
	//object=NULL;
}

item_model::~item_model()
{

}

void item_model::mouse_press(QGraphicsSceneMouseEvent *evt,UMLgraphicscene *pscene,Item item)
{
	baseobject *object = create_object(item);
	object->setPos(evt->scenePos());
	pscene->addItem(object);
}