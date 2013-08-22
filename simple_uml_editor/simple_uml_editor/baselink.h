#ifndef BASELINK_H
#define BASELINK_H

#include <QGraphicsLineItem>
#include <QPen>
class Node;

class baselink :public QGraphicsLineItem
{
public:
	baselink();
	void set(Node *begin,Node *end);
	void update_position();
protected:
	Node *_begin;
	Node *_end;
};


#endif