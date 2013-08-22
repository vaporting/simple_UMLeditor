#ifndef NEAR_NODE_H
#define NEAR_NODE_H
#include "node.h"
#include "baseobject.h"

Node* near_node(QPointF pos,baseobject *item)
{
	QPointF n_pos(item->n_node->getScenePosition());
	QPointF	s_pos(item->s_node->getScenePosition());
	QPointF w_pos(item->w_node->getScenePosition());
	QPointF e_pos(item->e_node->getScenePosition());
	int n_dis,s_dis,w_dis,e_dis;
	n_dis=(pos.x()-n_pos.x())*(pos.x()-n_pos.x())+(pos.y()-n_pos.y())*(pos.y()-n_pos.y());
	s_dis=(pos.x()-s_pos.x())*(pos.x()-s_pos.x())+(pos.y()-s_pos.y())*(pos.y()-s_pos.y());
	w_dis=(pos.x()-w_pos.x())*(pos.x()-w_pos.x())+(pos.y()-w_pos.y())*(pos.y()-w_pos.y());
	e_dis=(pos.x()-e_pos.x())*(pos.x()-e_pos.x())+(pos.y()-e_pos.y())*(pos.y()-e_pos.y());
	if(n_dis<=s_dis&&n_dis<=w_dis&&n_dis<=e_dis)
		return item->n_node;
	if(s_dis<n_dis&&s_dis<=w_dis&&s_dis<=e_dis)
		return item->s_node;
	if(w_dis<n_dis&&w_dis<s_dis&&w_dis<=e_dis)
		return item->w_node;
	return item->e_node;
}

#endif