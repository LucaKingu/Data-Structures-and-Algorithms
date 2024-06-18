#include <iostream>

void insertionSort(int array[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int currentValue = array[i];

        int j = i - 1;

        while (j >= 0 && array[j] > currentValue)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = currentValue;
    }
}

int main()
{
    int arr[] = {3,5,2,1,4};

    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr,size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}