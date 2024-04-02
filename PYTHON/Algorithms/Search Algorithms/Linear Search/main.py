import matplotlib.pyplot as plt


def LinearSearch(array,element):
    for i in range(len(array)):
        if array[i] == element:
            return i
    return -1




if __name__ == '__main__':
    #sortedList = [1,3,5,7,9,11]
    #element = 7

    #result = LinearSearch(sortedList,element)
    #print(result)

    input_list = [5,10,15,20,25]

    runtimes = [1,2,3,4,5]

    plt.plot(input_list,runtimes,marker='o')
    plt.xlabel('List numbers')
    plt.ylabel('Runtime(seconds)')
    plt.title('Linear Search Time Complexity')
    plt.grid(True)
    plt.show()

