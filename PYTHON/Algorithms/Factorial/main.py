
def factorial(num):
    if num <= 1:
        return 1
    else:
        return num * factorial(num - 1)


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    num = 5
    result = factorial(num)
    print(result)

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
