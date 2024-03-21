public class Main {

    public static void main(String[] args) {
        int num = 10;
        int result = Fibonacci(num);
        System.out.println(result);
    }

    public static int Fibonacci(int num)
    {
        if(num <= 1)
            return num;
        else
            return Fibonacci(num -1) + Fibonacci(num - 2);
    }
}