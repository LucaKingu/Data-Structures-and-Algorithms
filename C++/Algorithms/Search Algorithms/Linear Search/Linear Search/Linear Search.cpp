#include <iostream>

//The array size needs to be passed as a parameter aswell due to array decay.
int linearSearch(const int array[], int arraySize, int element)
{

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int sortedArray[] = { 1,3,5,7,9,11 };
    int element = 7;
    int arraySize = sizeof(sortedArray) / sizeof(sortedArray[0]);

    std::cout << linearSearch(sortedArray, arraySize , element) << std::endl;
}


