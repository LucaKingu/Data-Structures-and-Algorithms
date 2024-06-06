#include <iostream>


void Swap(int array[], int a, int b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}


//Once again, pointer decay coming into play
void selectionSort(int array[] , int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = array[i];
        int indexOfMin = i;

        for (int j = i+1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                indexOfMin = j;
            }
        }
        Swap(array, i, indexOfMin);
    }
}


int main()
{
    int array[] = {2,5,4,3,1};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array , size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}

