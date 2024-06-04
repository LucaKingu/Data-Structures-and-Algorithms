public class Main {
    public static void main(String[] args) {
        int array[] = {5,1,2,4,3};
        int length = array.length;

        for(int i = 0; i < length; i++)
        {
            for(int j = 0; j < length - i - 1; j++)
            {
                if(array[j] > array[j+1])
                {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }

        System.out.print("Sorted Array: ");
        for(int i = 0; i<length; i++)
        {
            System.out.print(array[i] + " ");
        }

    }
}