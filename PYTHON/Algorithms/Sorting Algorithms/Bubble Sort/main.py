from matplotlib import pyplot as plt


def bubbleSort(array):
    for i in range(len(array)):
        for j in range(len(array - i - 1)):
            if(array[j] > array[j+1]):
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp



if __name__ == '__main__':
    input_Array = {2,4,1,5,3}
    #bubbleSort(input_Array)
    runtimes = [1,2,3,4,5]

    plt.plot(input_Array, runtimes, marker='o')
    plt.xlabel('List numbers')
    plt.ylabel('Runtime(seconds)')
    plt.title('Bubble Sort Time Complexity')
    plt.grid(True)
    plt.show()