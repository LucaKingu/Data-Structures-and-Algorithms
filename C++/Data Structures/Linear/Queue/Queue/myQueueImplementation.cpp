#include "myQueueImplementation.h"
#include <iostream>

int myQueue[5];

int firstin = 0;
int firstout = 0;

void enqueue(int num)
{
	myQueue[firstin] = num;
	firstin++;
}

int dequeue()
{
	int num = myQueue[firstout];
	firstout++;

	return num;
}

int peek()
{
	int num = myQueue[firstout];

	return num;
}

void show()
{
	int i = firstout;
	while (i != firstin)
	{
		std::cout << myQueue[i] << " ";
		i++;
	}
}
