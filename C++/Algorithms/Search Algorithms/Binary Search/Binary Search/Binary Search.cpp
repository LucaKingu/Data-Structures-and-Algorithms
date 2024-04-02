#include <iostream>


int binarySearch(const int array[], int size ,int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int midIndex = (low + high) / 2;
        int midValue = array[midIndex];

        if (element == midValue)
        {
            return midIndex;
        }

        if (element < midValue)
        {
            high = midIndex - 1;
        }
        else
        {
            low = midIndex + 1;
        }
    }
    return -1;
}

int main()
{
    //Array MUST be sorted for Binary search to work
    int array[] = { 1,3,5,7,9,11 };

    int size = sizeof(array) / sizeof(array[0]);
    int element = 9;

    std::cout << binarySearch(array, size, element) << std::endl;
}