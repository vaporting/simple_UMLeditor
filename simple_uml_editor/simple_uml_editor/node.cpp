#include "node.h"
#include "baselink.h"

Node::Node()
{
	Polygon << QPointF(-5, 5) << QPointF(5,5)
              << QPointF(5, -5) << QPointF(-5, -5);
    qPath.addPolygon(Polygon);
    qBrush.setColor( Qt::red );
    qBrush.setStyle( Qt::SolidPattern );
    setFlags(ItemIsMovable | ItemIsSelectable);
}

Node::~Node()
{}

void Node::addLink(baselink *link)
{
	links.append(link);
}

QPointF Node::getScenePosition()
{
	return this->scenePos();
}

void Node::updateLinks()
{
	std::for_each( links.begin(), links.end(), []( baselink * link )->void {
		link->update_position();
	} );
}

QRectF Node::boundingRect()const
{
	return qPath.boundingRect();
}

void Node::paint( QPainter *painter, 
                const QStyleOptionGraphicsItem *option, QWidget *widget )
{
	painter->fillPath( qPath, qBrush );
	updateLinks();
}