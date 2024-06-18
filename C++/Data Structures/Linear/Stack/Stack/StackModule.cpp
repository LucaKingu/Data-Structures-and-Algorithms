#include <stdio.h>
#include <iostream>
#include "StackModule.h"

int stack[5];
int top = 0;

void Push(int num)
{
	stack[top] = num;
	top++;
}

void Show()
{
	int size = sizeof(stack) / sizeof(stack[0]);

	for (int i = 0; i < size; i++)
	{
		std::cout << stack[i] << "\n";
	}
}

int Pop()
{
	top--;
	int num = stack[top];

	stack[top] = 0;

	return num;
}


int Peek()
{
	int num = stack[top - 1];

	return num;
}
