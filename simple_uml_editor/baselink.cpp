#include "baselink.h"
#include "node.h"

baselink::baselink()
{
	_begin=NULL;
	_end=NULL;
}

void baselink::set(Node *begin,Node *end)
{
	_begin=begin;
	_end=end;
	_begin->addLink(this);
	_end->addLink(this);
	QPen pen(this->pen());
	pen.setColor(Qt::red);
	this->setPen(pen);
	this->setZValue( -1000 );
}

void baselink::update_position()
{
	this->setLine(QLineF(_begin->getScenePosition(),_end->getScenePosition()));
}