#ifndef USECASEOBJECT_H
#define USECASEOBJECT_H

#include <QColor>
#include <QGraphicsItem>
#include <QRectF>
#include <QPainter>
#include "baseobject.h"

class usecaseobject : public baseobject
{
public:
	usecaseobject();
	~usecaseobject();
	QRectF boundingRect()const;
	QPainterPath shape() const;
	void paint( QPainter *painter, 
              const QStyleOptionGraphicsItem *option, QWidget *widget );


private:
	QColor backgroundcolor;
	QColor outlinecolor;
	QColor textcolor;
	int x,y,width,height,pen_width;
	int add;
};


#endif