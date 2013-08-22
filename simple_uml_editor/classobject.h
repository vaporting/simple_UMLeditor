#ifndef CLASSOBJECT_H
#define CLASSOBJECT_H

#include <QColor>
#include <QGraphicsItem>
#include <QPolygonF>
#include <QPainter>
#include <QPainterPath>
#include <QSet>
#include "baseobject.h"

class classobject : public baseobject
{
public:
	classobject();
	~classobject();
	QRectF boundingRect()const;
	QPainterPath shape() const;
	void paint( QPainter *painter, 
              const QStyleOptionGraphicsItem *option, QWidget *widget );


private:
	
	QColor backgroundcolor;
	QColor outlinecolor;
	QColor textcolor;
	QList<QGraphicsItem *> child_items;
	int x,y,width,height,pen_width;
	int add;
};

#endif