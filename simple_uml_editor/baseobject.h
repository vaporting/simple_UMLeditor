#ifndef BASEOBJECT_H
#define BASEOBJECT_H
#include <QGraphicsItem>
#include "node.h"

class baseobject :public QGraphicsItem
{
public:
	baseobject();
	void setText(QString text);
	virtual QRectF boundingRect()const;
	virtual void paint( QPainter *painter, 
                      const QStyleOptionGraphicsItem *option, QWidget *widget );
	Node *n_node,*s_node,*e_node,*w_node;
	QString _text;
};

#endif