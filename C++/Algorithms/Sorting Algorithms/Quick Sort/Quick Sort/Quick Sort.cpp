#include <iostream>


void Swap(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void quickSort(int arr[], int lowIndex, int highIndex)
{
    if (lowIndex >= highIndex)
    {
        return;
    }

    int pivot = arr[highIndex];

    int leftPointer = lowIndex;
    int rightPointer = highIndex;

    while (leftPointer < rightPointer)
    {
        while (arr[leftPointer] <= pivot && leftPointer < rightPointer)
        {
            leftPointer++;
        }

        while (arr[rightPointer] >= pivot && leftPointer < rightPointer)
        {
            rightPointer--;
        }
        Swap(arr, leftPointer, rightPointer);

    }
        Swap(arr, leftPointer, highIndex);

        quickSort(arr, lowIndex, leftPointer - 1);
        quickSort(arr, leftPointer + 1, highIndex);
    }



int main()
{
    int array[] = { 2,3,1,6,4,10,5,8,7,9 };
    int arrayLength = sizeof(array) / sizeof(array[0]);


    quickSort(array, 0, arrayLength - 1);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < arrayLength; i++)
    {
        std::cout << array[i] << " ";
    }

}