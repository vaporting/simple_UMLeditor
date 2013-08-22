#ifndef ITEMGROUP_H
#define ITEMGROUP_H

#include <QGraphicsItemGroup>

class ItemGroup : public QGraphicsItemGroup {
public:
	ItemGroup( QGraphicsItem * parent = 0 );
	void paint( QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0 );
};

#endif