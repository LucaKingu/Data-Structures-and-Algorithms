import matplotlib.pyplot as plt


def binarySearch(array,element):
    low = 0
    high = len(array) - 1

    while(low <= high):
        midIndex = (low + high) // 2
        midValue = array[midIndex]

        if(element == midValue):
            return midIndex
        if(element < midValue):
            high = midIndex - 1
        else:
            low = midIndex + 1
    return -1








if __name__ == '__main__':
    #array= [1,3,5,7,9,11]
    #element = 8

    #print(binarySearch(array,element))

    input_array = [8,16,32,64,128]
    runtime = [10,30,50,70,90]

    plt.plot(input_array,runtime,marker='o')
    plt.xlabel('Array values')
    plt.ylabel('runtime(seconds)')
    plt.title('Binary Search Time Complexity')
    plt.grid(True)
    plt.show()


