#ifndef GENERALIZATIONLINK_H
#define GENERALIZATIONLINK_H

#include <QPainter>
#include <QPolygonF>
#include <QPainterPath>
#include "baselink.h"

class generalizationlink :public baselink
{
public:
	generalizationlink();
	QRectF boundingRect()const;
	void paint( QPainter * painter
			  , const QStyleOptionGraphicsItem * option, QWidget * parent = 0 );

};

#endif