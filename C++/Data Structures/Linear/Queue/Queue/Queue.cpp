#include <iostream>
#include "myQueueImplementation.h"

int main()
{
    enqueue(4);
    enqueue(3);
    enqueue(8);

    std::cout << "\nEnque: ";
    show();

    std::cout << "\nDequeue: ";
    dequeue();

    show();

    std::cout << "\nPeek: " << peek();  
}

