#include <iostream>

int main()
{
	int array[] = { 2,5,3,4,1 };
	int arrayLength = sizeof(array) / sizeof(array[0]);


	for (int i = 0; i < arrayLength; i++)
	{
		for (int j = 0; j < arrayLength - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j+1] = temp;
			}
		}
	}


	std::cout << "Sorted Array: ";
	for (int i = 0; i < arrayLength; i++)
	{
		std::cout << array[i] << " ";
	}

}

