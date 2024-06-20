public class Queue {
    private int[] myQueue = new int[5];
    private int firstIn;
    private int firstOut;

    public void enqueue(int num) {
        myQueue[firstIn] = num;
        firstIn++;
    }

    public int dequeue() {
        int num = myQueue[firstOut];
        firstOut++;
        return num;
    }

    public int peek() {
        return myQueue[firstOut];
    }

    public void show() {
        int i = firstOut;
        while (i != firstIn) {
            System.out.print(myQueue[i] + " ");
            i++;
        }
        System.out.println();
    }
}
