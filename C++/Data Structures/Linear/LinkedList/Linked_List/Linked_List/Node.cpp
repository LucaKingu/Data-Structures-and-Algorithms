#include "Node.h"
#include <iostream>

Node::Node(int value)
{
	data = value;
	next = nullptr;
}

Node::~Node()
{
	std::cout << "Node with data " << data << " deleted" << std::endl;
}