public class Main {
    public static void main(String[] args)
    {
        Stack stack = new Stack();

        stack.Push(3);
        stack.Push(5);

        System.out.print("Peek: " +stack.Peek() +"\n\n");
        stack.show();


        stack.Push(4);
        stack.Push(1);
        System.out.println("\n");
        stack.show();


        System.out.println("\nPop: " +stack.Pop() + "\n");

        stack.show();

    }
}