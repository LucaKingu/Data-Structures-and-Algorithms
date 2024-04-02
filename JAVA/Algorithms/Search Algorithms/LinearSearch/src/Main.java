public class Main {
    public static void main(String[] args) {
        int[] sortedArray = {1,3,5,7,9,11};
        //For linear search, the array can also be unsorted
        int element = 7;

        System.out.println(linearSearch(sortedArray,element));

    }

    public static int linearSearch(int[] array , int key)
    {
        for(int i = 0; i < array.length; i++)
        {
            if(array[i] == key)
            {
                return i;
            }
        }
        return -1;
    }

}