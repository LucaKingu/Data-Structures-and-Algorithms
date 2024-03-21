#include <iostream>

int Fibonacci(int num)
{
    if (num <= 1)
        return num;
    else
        return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main()
{
    int num = 10;
    int result = Fibonacci(num);
    std::cout << result << std::endl;
}


