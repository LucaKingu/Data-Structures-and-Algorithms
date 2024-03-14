import matplotlib.pyplot as plt
def factorial_recurssion(num):
    if num <= 1:
        return 1
    else:
        return num * factorial_recurssion(num - 1)

if __name__ == '__main__':
    input_sizes = [5,10,15,20,25]

    runtimes = [1,10,100,1000,10000]

    plt.plot(input_sizes, runtimes, marker='o')
    plt.xlabel('Input size')
    plt.ylabel('Runtime(Seconds)')
    plt.title('Factorial Time Complexity')
    plt.grid(True)
    plt.show()

