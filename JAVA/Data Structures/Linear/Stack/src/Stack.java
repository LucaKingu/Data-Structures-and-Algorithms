public class Stack
{
    int stack[] = new int[5];
    int top = 0;

    public void Push(int num)
    {
        stack[top] = num;
        top++;
    }

    public int Pop()
    {
        top--;
        int num = stack[top];

        stack[top] = 0;

        return num;
    }

    public int Peek()
    {
        int num = stack[top - 1];

        return num;
    }

    public void show()
    {
        for(int i = 0; i < stack.length; i++)
        {
            System.out.println(stack[i] + " ");
        }
    }

}
