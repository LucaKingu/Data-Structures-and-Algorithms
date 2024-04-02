public class Main {
    public static void main(String[] args) {
        int[] sortedArray = {1,3,5,7,9,11};
        int element = 11;

        System.out.println(BinarySearch(sortedArray , element));

        //Java also has a built in binary search algorithm inside
        //of utils.Array package. I always recommend using built in
        //packages since they are tested , efficient and overall integral.
    }

    public static int BinarySearch(int[] array, int element)
    {
        int low = 0;
        int high = array.length - 1;

        while(low <= high)
        {
           int middleIndex = (high + low) / 2;
           int middleValue = array[middleIndex];

           if(element == middleValue)
           {
               return middleIndex;
           }

           if(element < middleValue)
           {
                high = middleIndex - 1;
           }
           else
           {
               low = middleIndex + 1;
           }
        }
        return -1;
    }
}