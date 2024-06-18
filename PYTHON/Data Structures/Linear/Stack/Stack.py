

stack = [0] * 5
top = 0

def Push(num):
    global top
    stack[top] = num
    top += 1

def Show():
    for i in range(len(stack)):
        print(stack[i])

def Pop():
    global top
    top -= 1

    num = stack[top]
    stack[top] = 0

    return num

def Peek():
    num = stack[top - 1]
    return num
