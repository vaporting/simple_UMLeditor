#ifndef UMLGRAPHICSCENE_H
#define UMLGRAPHICSCENE_H

#include <QtGui/QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "enum.h"
class QInputDialog;
class item_model;
class select_model;
class link_model;
class ItemGroup;

class UMLgraphicscene :public QGraphicsScene
{
	Q_OBJECT

public:
	UMLgraphicscene();
	~UMLgraphicscene();
	void set_mode(Mode mode);
	void set_item(Item item);
	void set_link(Link link);
	void change_object_name();
	void group_select_items();
	void ungroup_select_items();
protected:
	QList<QGraphicsItem *> getselectedroots();
	void mousePressEvent(QGraphicsSceneMouseEvent *evt);
	void mouseMoveEvent(QGraphicsSceneMouseEvent *evt);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *evt);
private:
	Mode cur_mode;
	Item _item;
	Link _link;
	item_model *i_model;
	select_model *s_model;
	link_model *l_model;
};



#endif