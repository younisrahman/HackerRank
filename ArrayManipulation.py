#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'arrayManipulation' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#


def arrayManipulation(n, queries):
    # Write your code here
    # arr = [0] * (n + 1)
    # for i in queries:
    #     for j in range(i[0], i[1]+1):
    #         arr[j] += i[2]
    # return max(arr)
    arr = [0] * (n + 1)
    for a, b, k in queries:
        arr[a-1] += k
        arr[b] -= k
    max_val = temp = 0
    for i in arr:
        temp += i
        # print(temp)
        if temp > max_val:
            max_val = temp
    return max_val

    # arr = [0]*(n+2)

    # # perform the query operations
    # for a, b, k in queries:
    #     arr[a] += k
    #     arr[b+1] -= k
    #     print(arr)
    # # find max element from the array
    # maxnum = temp = 0
    # for val in arr:
    #     temp += val
    #     maxnum = max(maxnum, temp)
    # return maxnum


first_multiple_input = input().rstrip().split()

n = int(first_multiple_input[0])

m = int(first_multiple_input[1])

queries = []

for _ in range(m):
    queries.append(list(map(int, input().rstrip().split())))

result = arrayManipulation(n, queries)

print(result)
