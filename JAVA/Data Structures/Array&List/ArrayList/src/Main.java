import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {

        //You can opt to not define values inside,there is no
        //need for a dummy ArrayList since its whole point
        //is to be dynamic
        ArrayList<Integer> myList = new ArrayList<>(Arrays.asList(1,2,3));

        //Get element
        //There is a small warning which suggest using function
        //"getFirst()" which is also viable.
        System.out.println(myList.get(0));

        //Set element, there is also index,num method
        myList.add(4);
        System.out.println(myList);

        //Remove element,in this case first index,likewise I can
        //use removeFirst function
        myList.remove(0);
        System.out.println(myList);


        //Sort an unordered list
        ArrayList<Integer> sortList = new ArrayList<>(Arrays.asList(2,1,4,5,3,6,8,7));
        Collections.sort(sortList);
        System.out.println(sortList);
    }
}