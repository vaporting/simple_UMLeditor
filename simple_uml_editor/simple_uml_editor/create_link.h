#ifndef CREATE_LINK_H
#define CREATE_LINK_H

#include "baselink.h"
#include "compositionlink.h"
#include "generalizationlink.h"

baselink* create_link(Link link)
{
	if(link==ASS)
	{
		baselink *ass_link= new baselink();
		return ass_link;
	}
	else if(link==GEN)
	{
		generalizationlink *gen_link= new generalizationlink();
		return gen_link;
	}
	else
	{
		compositionlink *com_link= new compositionlink();
		return com_link;
	}
}

#endif