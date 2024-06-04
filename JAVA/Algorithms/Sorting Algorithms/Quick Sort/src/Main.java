public class Main {
    public static void main(String[] args)
    {
        int array[] = {2,4,1,5,7,3,9,8,10,6};

        //Choosing last element for pivot
        quickSort(array, 0 , array.length - 1);

        System.out.println("Sorted Array: ");
        for(int i = 0; i < array.length; i++)
        {
            System.out.println(array[i]);
        }
    }

    public static void quickSort(int[] array, int lowIndex, int highIndex)
    {
        if(lowIndex >= highIndex)
        {
            return;
        }

        int pivot = array[highIndex];

        int leftPointer = lowIndex;
        int rightPointer = highIndex;

        while(leftPointer < rightPointer)
        {
            while(array[leftPointer] <= pivot && leftPointer < rightPointer)
            {
                leftPointer++;
            }
            while(array[rightPointer] >= pivot && leftPointer < rightPointer)
            {
                rightPointer--;
            }

            Swap(array,leftPointer,rightPointer);
        }
        Swap(array,leftPointer,highIndex);

        quickSort(array,lowIndex,leftPointer - 1);
        quickSort(array,leftPointer + 1, highIndex);
    }


    private static void Swap(int[] array, int index1, int index2)
    {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }

}