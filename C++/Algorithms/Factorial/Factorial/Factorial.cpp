#include <iostream>

int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int result = factorial(5);
    std::cout << "result: " << result << std::endl;
}


