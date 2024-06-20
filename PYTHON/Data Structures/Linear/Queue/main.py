from Queue import enqueue, dequeue, peek, show

if __name__ == '__main__':
    enqueue(1)
    enqueue(3)
    enqueue(8)

    show()

    print("\ndequeue: ")
    dequeue()

    show()

    print("\nPeek:", peek())
