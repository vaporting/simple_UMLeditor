#include "classobject.h"
#include <QGraphicsScene>


classobject::classobject()
{
	backgroundcolor = Qt::white;
	backgroundcolor.setAlpha(130);
	outlinecolor = Qt::black;
	textcolor = Qt::black;
	_text="";
	x=-30;
	y=-30;
	width=60;
	height=90;
	pen_width=4;
	add=0;
	n_node = new Node();
	child_items.append(n_node);
	s_node = new Node();
	child_items.append(s_node);
	e_node = new Node();
	child_items.append(e_node);
	w_node = new Node();
	child_items.append(w_node);
	setFlags(ItemIsMovable | ItemIsSelectable);
}

classobject::~classobject()
{

}



QRectF classobject::boundingRect()const
{
	return QRectF(x-pen_width/2,y-pen_width/2,width+pen_width,height+pen_width);
}

QPainterPath classobject::shape() const
{
	QPainterPath path;
	path.addRect(boundingRect());
	return path;
}

void classobject::paint( QPainter *painter, 
          const QStyleOptionGraphicsItem *option, QWidget *widget )
{
	QPen pen(outlinecolor);
	pen.setWidth(pen_width);
	painter->setPen(pen);
	painter->setBrush(backgroundcolor);
	painter->drawRect(boundingRect());
	painter->drawLine(-30,30,30,30);
	painter->drawLine(-30,0,30,0);
	painter->drawText(QRectF(-30,-30,60,30) ,Qt::AlignCenter,_text);
	/*n_node->setPos(this->pos().x(),this->pos().y()-30+pen_width/2);
    w_node->setPos(this->pos().x()-30+pen_width/2,this->pos().y()+15);
    e_node->setPos(this->pos().x()+30-pen_width/2,this->pos().y()+15);
    s_node->setPos(this->pos().x(),this->pos().y()+60-pen_width/2);*/
	n_node->setPos(0,0-30+pen_width/2);
    w_node->setPos(0-30+pen_width/2,15);
    e_node->setPos(30-pen_width/2,15);
    s_node->setPos(0,60-pen_width/2);
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