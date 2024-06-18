public class Main {
    public static void main(String[] args)
    {
        int unsortedArray[] = {2,5,4,1,3};

        insertionSort(unsortedArray);

        for(int i = 0; i < unsortedArray.length; i++)
        {
            System.out.println(unsortedArray[i]);
        }
    }

    private static void insertionSort(int[] array)
    {
        for(int i = 1; i < array.length; i++)
        {
            int currentValue = array[i];

            int j = i - 1;

            while(j >= 0 && array[j] > currentValue)
            {
                array[j + 1] = array[j];
                j--;
            }
            array[j+1] = currentValue;
        }


    }


}