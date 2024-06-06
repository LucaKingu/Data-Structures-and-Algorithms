from matplotlib import pyplot as plt


def bubbleSort(array):
    for i in range(len(array)):
        for j in range(len(array - i - 1)):
            if array[j] > array[j+1]:
                #In python, you can use 'Tuple Unpacking'
                array[j], array[j+1] = array[j+1], array[j]



if __name__ == '__main__':
    input_Array = [10,20,30,40,50,60,70,80,90,100]
    #bubbleSort(input_Array)
    runtimes = [1,4,9,16,25,36,49,64,81,100]

    plt.plot(input_Array, runtimes, marker='o')
    plt.xlabel('List numbers')
    plt.ylabel('Runtime(seconds)')
    plt.title('Bubble Sort Time Complexity')
    plt.grid(True)
    plt.show()