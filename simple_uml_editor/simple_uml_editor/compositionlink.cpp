#include "compositionlink.h"
#include <QRectF>

compositionlink::compositionlink()
{
	_begin=NULL;
	_end=NULL;
}

QRectF compositionlink::boundingRect() const
{
	qreal total_width = this->pen().width()+5.0;
	return this->baselink::boundingRect().adjusted(-total_width,-total_width,total_width,total_width);
}

void compositionlink::paint( QPainter * painter
						   , const QStyleOptionGraphicsItem * option, QWidget * parent)
{
	QPolygonF head;
	head.append( QPointF( 0.0, 0.0 ) );
	head.append( QPointF( 2.0, -1.0 ) );
	head.append( QPointF( 4.0, 0.0 ) );
	head.append( QPointF( 2.0, 1.0 ) );
	QPainterPath path;
	path.addPolygon( head );

	QTransform transform;
	transform.translate( this->line().p1().x(), this->line().p1().y() );
	transform.scale(5,5);
	transform.rotate(0.0-this->line().angle());
	QTransform backup( painter->transform() );
	painter->setTransform( transform, true );
	painter->fillPath(path, Qt::red);
	painter->setTransform(backup);

	this->baselink::paint( painter, option, parent );
}