if __name__ == '__main__':
    #Python does not contain an array function, instead is consists of a List.

    #Display list
    myList = [1,2,3,4,5]

    print("Default list: ",myList)

    #Add value after the last index
    myList.append(6)

    #Add value at specified index
    myList.insert(6,7)

    print("List after additions: ",myList)

    #Removed the first specified value in the list
    myList.remove(2)

    #Removes and returns the element at a specified index
    pop = myList.pop(0)

    #Returns index of first occurence at specified value
    index5 = myList.index(5)

    countList = [1,2,2,3,4,2]
    #Returns the number of occurences of a specified value in a list
    count6 = countList.count(2)

    sortingList = [1,2,5,2,3,6,7,4]
    sortingList.sort()
    print("sorted list: ", sortingList)

    print("Count of element: ",count6)
    print("Popped element: ",pop)
    print("Index of given value" , index5)
