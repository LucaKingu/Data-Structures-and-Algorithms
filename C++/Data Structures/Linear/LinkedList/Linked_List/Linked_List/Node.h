#pragma once
#include <iostream>

class Node
{
public:
	int data;
	Node* next;

	Node(int value);

	~Node();
};