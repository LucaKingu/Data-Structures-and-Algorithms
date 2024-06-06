public class Main {
    public static void main(String[] args)
    {
        int[] myArray = {3,5,1,2,4};

        selectSort(myArray);

        for(int i = 0; i < myArray.length; i++)
        {
            System.out.println(myArray[i]);
        }
    }

    public static void Swap(int[] array, int a  , int b)
    {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }

    public static void selectSort(int[] array)
    {
        //No reason to look at the last number, better optimized
        for(int i = 0; i < array.length - 1; i++)
        {
            int min = array[i];
            int indexOfMin = i;

            for(int j = i+1; j < array.length; j++)
            {
                if(array[j] < min)
                {
                    min = array[j];
                    indexOfMin = j;
                }
            }

            Swap(array,i,indexOfMin);
        }
    }

}