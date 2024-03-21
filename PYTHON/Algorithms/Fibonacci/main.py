import matplotlib.pyplot as plt

def Fibonacci(num):
    if num <= 1:
        return num
    else:
        return Fibonacci(num - 1) + Fibonacci(num - 2)

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    input_sizes = [3,6,9,12,15]

    runtimes = [1,10,100,1000,10000]

    plt.plot(input_sizes, runtimes, marker='o')
    plt.xlabel('Input sizes')
    plt.ylabel('Runtime(seconds)')
    plt.title('Fibonacci Time Complexity')
    plt.grid(True)
    plt.show()

