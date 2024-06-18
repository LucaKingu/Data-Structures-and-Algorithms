public class Main {
    public static void main(String[] args) {
        //Initialize array
        int[] dummyArray = new int[5];

        int[] array = {1,2,3,4,5};

        //Set elements
        dummyArray[0] = 1;
        dummyArray[1] = 2;
        //...

        //Get element
        System.out.println("element: "+array[3]);

        //Get size
        System.out.println("Length: "+array.length);

        //Display elements in array
        for(int i = 0; i < array.length; i++)
        {
            System.out.println(array[i]);
        }

        //To further get into removing , sorting and other functions in an array, we use Lists. Which are
        //the data structures I suggest on using due to the negligible difference in performance between lists
        //and normal arrays.
    }
}