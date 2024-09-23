#include "Node.h"
#include <iostream>

Node::Node(int value)
{
	data = value;
	next = nullptr;
}

Node::~Node()
{
	/* The destructor was originally designed to display output, but since it gets called
	 when the object is destroyed, it results in displaying messages for nodes that 
	 were not deleted properly. This can lead to confusion, so the display output has 
	been removed.*/
}