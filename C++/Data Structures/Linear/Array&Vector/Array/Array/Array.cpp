#include <iostream>

int main()
{
    //Init array
    int dummyArray[5];

    int Array[] = {1,2,3,4,5};

    //Set Elements
    dummyArray[0] = 1;
    dummyArray[1] = 2;
    //...

    //Get Element
    std::cout << "Element: " << dummyArray[0] << std::endl;

    //Get array length
    int size = sizeof(Array) / sizeof(Array[0]);
    std::cout << "Size: " << size << std::endl;

    //Display elements
    for (int i = 0; i < size; i++)
    {
        std::cout << Array[i] << std::endl;
    }
}