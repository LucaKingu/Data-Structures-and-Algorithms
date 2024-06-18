from Stack import Push , Pop , Peek, Show

if __name__ == '__main__':
    Push(3)
    Push(5)
    Push(1)
    Push(8)

    Show()


    popped = Pop()
    print("\nPop: " , popped , '\n')

    Show()

    peeked = Peek()
    print("\nPeeked: " , peeked, '\n')

    Show()
