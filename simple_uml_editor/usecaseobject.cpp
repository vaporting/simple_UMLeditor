#include "usecaseobject.h"
#include <QGraphicsScene>

usecaseobject::usecaseobject()
{
	backgroundcolor = Qt::white;
	backgroundcolor.setAlpha(130);
	outlinecolor = Qt::black;
	textcolor = Qt::black;
	_text="";
	x=-40;
	y=-25;
	width=80;
	height=50;
	pen_width=4;
	add=0;
	n_node = new Node();
	s_node = new Node();
	e_node = new Node();
	w_node = new Node();
	setFlags(ItemIsMovable | ItemIsSelectable);
}

usecaseobject::~usecaseobject()
{

}


QRectF usecaseobject::boundingRect()const
{
	return QRectF(x-pen_width/2,y-pen_width/2,width+pen_width,height+pen_width);
}

QPainterPath usecaseobject::shape() const
{
	QPainterPath path;
	path.addEllipse(boundingRect());
	return path;
}

void usecaseobject::paint( QPainter *painter, 
						 const QStyleOptionGraphicsItem *option, QWidget *widget )
{
	QPen pen(outlinecolor);
	pen.setWidth(pen_width);
	painter->setPen(pen);
	painter->setBrush(backgroundcolor);
	painter->drawEllipse(boundingRect());
	painter->drawText(boundingRect(), Qt::AlignCenter, _text);
	n_node->setPos(0,25-pen_width/2);
    w_node->setPos(0-40+pen_width/2,0);
    e_node->setPos(40-pen_width/2,0);
    s_node->setPos(0,0-25+pen_width/2);

	if(add==0)
	{
		n_node->setParentItem(this);
		w_node->setParentItem(this);
		e_node->setParentItem(this);
		s_node->setParentItem(this);
		add=1;
	}

	if(this->isSelected())
	{
		n_node->show();
        w_node->show();
        e_node->show();
        s_node->show();
	}
	else
	{
		n_node->hide();
        w_node->hide();
        e_node->hide();
        s_node->hide();
	}

}