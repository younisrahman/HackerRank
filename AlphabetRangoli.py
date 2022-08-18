# Alphabet Rangoli

from itertools import count


def print_rangoli(size):
    # your code goes here
    alpha = 'abcdefghijklmnopqrstuvwxyz'
    newSize = (size*2)-1 + (size*2-2)
    pattern = (newSize - 1)//2
    count = 1
    count2 = 1
    count3 = size-1
    for i in range(((size*2)-1)):
        newString = alpha[count3:size]
        if count2 == size:
            for _ in range(pattern):
                print("-", end='')
            for j in range(len(newString)-1, -1, -1):
                if j == 0 and i != (size*2)-3:
                    print(newString[j], end='')
                else:
                    print(newString[j], end='-')
            for j in range(1, len(newString)):
                if j == 1 and j == len(newString)-1:
                    print(newString[j], end='')
                else:
                    print('-'+newString[j], end='')
            for _ in range(pattern):
                print("-", end='')
            pattern = pattern + 2
            count = count - 2
            count3 = count3+1
        else:
            for _ in range(pattern):
                print("-", end='')
            for j in range(len(newString)-1, -1, -1):
                if j == 0 and i != 1:
                    print(newString[j], end='')
                else:
                    print(newString[j], end='-')
            for j in range(1, len(newString)):
                if j == 1 and j == len(newString)-1:
                    print(newString[j], end='')
                else:
                    print('-'+newString[j], end='')
            for _ in range(pattern):
                print("-", end='')
            pattern = pattern - 2
            count = count + 2
            count2 = count2 + 1
            count3 = count3 - 1

        print()


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
