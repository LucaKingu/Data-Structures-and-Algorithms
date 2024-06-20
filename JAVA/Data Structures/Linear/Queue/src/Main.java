public class Main
{
    public static void main(String[] args)
    {
        Queue myQueue = new Queue();

        myQueue.enqueue(1);
        myQueue.enqueue(3);
        myQueue.enqueue(6);

        myQueue.show();

        System.out.println("\nDequeue");
        myQueue.dequeue();

        myQueue.show();

        System.out.println("\nPeek: " +myQueue.peek());
    }
}