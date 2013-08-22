#include "generalizationlink.h"
#include <cmath>

generalizationlink::generalizationlink()
{
	_begin=NULL;
	_end=NULL;
}

QRectF generalizationlink::boundingRect()const
{
	qreal total_width = ( this->pen().widthF() + 10.0 ) / 2.0;
	return this->baselink::boundingRect().adjusted( -total_width, -total_width, total_width, total_width );
}

void generalizationlink::paint( QPainter * painter
							   , const QStyleOptionGraphicsItem * option, QWidget * parent)
{
	double PI = ::acos( -1.0 );
	QPolygonF head;
	head.append( QPointF( 0.0, 0.0 ) );
	head.append( QPointF( ::cos( PI / 6 ), -::sin( PI / 6 ) ) );
	head.append( QPointF( ::cos( -PI / 6 ), -::sin( -PI / 6 ) ) );

	QPainterPath path;
	path.addPolygon( head );

	QTransform transform;
	transform.translate( this->line().p1().x(), this->line().p1().y() );
	transform.scale( 10, 10 );
	transform.rotate( 0.0-this->line().angle() );

	QTransform backup( painter->transform() );
	painter->setTransform( transform, true );
	painter->fillPath( path,Qt::red);
	painter->setPen( this->pen() );
	painter->drawPolygon( head );
	painter->setTransform( backup );

	qreal triangleHeight = ::sqrt( 3.0 ) / 2.0;
	QPointF realP2( transform.map( QLineF( QPointF( 0.0, 0.0 ), QPointF( triangleHeight, 0.0 ) ) ).p2() );
	painter->drawLine( this->line().p1(), realP2 );

	this->baselink::paint( painter, option, parent );
}