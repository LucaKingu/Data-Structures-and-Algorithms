from matplotlib import pyplot as plt


def Swap(array,a,b):
    array[a], array[b] = array[b], array[a]

def selectSort(array):
    for i in range(len(array) - 1):

        min = array[i]
        indexOfMin = i

        for j in range(i + 1, len(array)):
            if array[j] < min:
                min = array[j]
                indexOfMin = j

            Swap(array, i, indexOfMin)


if __name__ == '__main__':
    input_array = [10, 50, 100, 200, 300]
    runtimes = [0.001, 0.05, 0.2, 0.8, 1.8]

    selectSort(input_array)

    plt.plot(input_array, runtimes, marker='o')
    plt.xlabel('List numbers')
    plt.ylabel('Runtime(seconds)')
    plt.title('Bubble Sort Time Complexity')
    plt.grid(True)
    plt.show()


