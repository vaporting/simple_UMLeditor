#ifndef NODE_H
#define NODE_H

#include <QColor>
#include <QGraphicsItem>
#include <QPolygonF>
#include <QPainter>
class baselink;


class Node : public QGraphicsItem
{
public:
	Node();
	~Node();
	void addLink(baselink *link);
	QPointF getScenePosition();
	void updateLinks();
	QRectF boundingRect()const;
	void paint( QPainter *painter, 
              const QStyleOptionGraphicsItem *option, QWidget *widget );
private:
	QPainterPath  qPath;
	QBrush        qBrush;
	QList<baselink* > links;
	QPointF position;
	QPolygonF Polygon;
};

#endif