#pragma once
#include "Node.h"

class Linked_List
{
public:
	Node* head;

	Linked_List();
	~Linked_List();

	void insert(int data);
	void deleteAt(int index);
	void show();
};