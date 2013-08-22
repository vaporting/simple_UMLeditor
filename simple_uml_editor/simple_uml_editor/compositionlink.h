#ifndef COMPOSITIONLINK_H
#define COMPOSITIONLINK_H

#include <QPainter>
#include <QPolygonF>
#include <QPainterPath>
#include "baselink.h"

class compositionlink :public baselink
{
public:
	compositionlink();
	QRectF boundingRect()const;
	void paint( QPainter * painter
			  , const QStyleOptionGraphicsItem * option, QWidget * parent = 0 );

};

#endif