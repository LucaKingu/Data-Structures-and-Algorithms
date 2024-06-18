from matplotlib import pyplot as plt


def insertionSort(list):
    for i in range(len(list)):
        currentValue = list[i]
        j = i - 1

        while(j >= 0 and list[j] > currentValue):
            list[j+1] = list[j]
            j -= 1
        list[j+1] = currentValue

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    input_Array = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
    runtimes = [0.001, 0.004, 0.009, 0.016, 0.025, 0.036, 0.049, 0.064, 0.081, 0.1]

    plt.plot(input_Array, runtimes, marker='o')
    plt.xlabel('List numbers')
    plt.ylabel('Runtime(seconds)')
    plt.title('Insertion Sort Time Complexity')
    plt.grid(True)
    plt.show()
