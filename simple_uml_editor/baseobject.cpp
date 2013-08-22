#include "baseobject.h"

baseobject::baseobject()
{
	_text="";
}

void baseobject::setText(QString text)
{
	_text=text;
}

QRectF baseobject::boundingRect()const
{
	QRectF r2(QPoint(10, 20), QSize(1, 1));;
    return r2;
}

void baseobject::paint(QPainter *painter, 
                      const QStyleOptionGraphicsItem *option, QWidget *widget )
{

}