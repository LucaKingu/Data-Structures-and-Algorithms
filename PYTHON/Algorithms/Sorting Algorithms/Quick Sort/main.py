from matplotlib import pyplot as plt

def Swap(array,index1,index2):
    array[index1], array[index2] = array[index2], array[1]


def quickSort(array,lowIndex,highIndex):
    if lowIndex >= highIndex:
        return

    pivot = array[highIndex]

    leftPointer = lowIndex
    rightPointer = highIndex

    while(leftPointer < rightPointer):
        while array[leftPointer] <= pivot and leftPointer < rightPointer:
            leftPointer += 1

        while array[rightPointer] >= pivot and leftPointer < rightPointer:
            rightPointer -= 1

        Swap(array,leftPointer,rightPointer)

    Swap(array, leftPointer, highIndex)

    quickSort(array, lowIndex, leftPointer - 1)
    quickSort(array, leftPointer + 1, highIndex)


if __name__ == '__main__':
    input_Array = [1,2,3,4,5,6,7,8,9,10]
    runtimes = [0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1]

    plt.plot(input_Array, runtimes, marker='o')
    plt.xlabel('List numbers')
    plt.ylabel('Runtime(seconds)')
    plt.title('Bubble Sort Time Complexity')
    plt.grid(True)
    plt.show()
