#include <iostream>
#include "StackModule.h"


int main()
{
    Push(2);
    Push(4);
    Push(1);

    Show();

    std::cout << "\nPop: " << Pop() << "\n\n";

    Show();

    Peek();

    std::cout << "\nPeek: " << Peek() << "\n";
}
