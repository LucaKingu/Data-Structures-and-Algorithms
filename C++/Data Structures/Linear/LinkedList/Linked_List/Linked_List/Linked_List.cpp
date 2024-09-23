#include <iostream>
#include "Linked_List.h"

Linked_List::Linked_List()
{
	head = nullptr;
}

void Linked_List::insert(int data)
{
	Node* node = new Node(data);

	if(head == nullptr)
	{
		head = node;
	}
	else
	{
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
}

void Linked_List::deleteAt(int index)
{
	if (head == nullptr)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}

	if (index == 0)
	{
		Node* temp = head; 
		head = head->next;
		delete temp; 
	}
	else
	{
		Node* temp = head; 
		for (int i = 0; i < index - 1; i++) {
			if (temp->next == nullptr) {
				std::cout << "Index out of bounds" << std::endl;
				return;
			}
			temp = temp->next;
		}

		Node* nodeToDelete = temp->next; 
		if (nodeToDelete != nullptr)
		{ 
			temp->next = nodeToDelete->next; 
			delete nodeToDelete; 
			std::cout << "Node deleted" << std::endl; 
		}
	}
}


void Linked_List::show()
{
	Node* temp = head;

	if (temp == nullptr)
	{
		std::cout << "List is empty" << std::endl;
	}
	else
	{
		//In this case, this is the part where we do not skip the last node by
		//NOT using -> operator. 
		while (temp != nullptr)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
}

//Since this is C++, We must delete the newly created objects in the destructor.
//Go through each node one by one to delete
Linked_List::~Linked_List()
{
	Node* current = head;
	while (current != nullptr)
	{
		Node* temp = current;
		current = current->next;
		delete temp;
	}
}