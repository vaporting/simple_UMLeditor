#ifndef CREATE_OBJECT_H
#define CREATE_OBJECT_H
#include "classobject.h"
#include "usecaseobject.h"
#include "enum.h"

baseobject* create_object(Item item)
{
	if(item==CLASS)
	{
		classobject *c_object=new classobject();
		return c_object;
	}
	else
	{
		usecaseobject *u_object=new usecaseobject();
		return u_object;
	}
}

#endif