myQueue = [0] * 5

firstIn = 0
firstOut = 0

def enqueue(num):
    global firstIn

    myQueue[firstIn] = num
    firstIn += 1

def dequeue():
    global firstOut

    num = myQueue[firstOut]
    firstOut += 1

    return num

def peek():
    num = myQueue[firstOut]
    return num

def show():
    i = firstOut
    while(i != firstIn):
        print(myQueue[i])
        i += 1