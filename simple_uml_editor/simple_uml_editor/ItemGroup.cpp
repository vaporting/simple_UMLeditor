#include "ItemGroup.h"
#include <QPen>
#include <QPainter>

ItemGroup::ItemGroup( QGraphicsItem * parent ):
QGraphicsItemGroup( parent )
{
	this->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemSendsGeometryChanges);
}

void ItemGroup::paint( QPainter * painter, const QStyleOptionGraphicsItem * , QWidget * ) 
{
	if(isSelected()) 
	{
		QPen pen( painter->pen() );
		pen.setColor(Qt::gray);
		pen.setStyle( Qt::DotLine );
		painter->setPen(pen);
		painter->drawRect(this->boundingRect());
	}
}