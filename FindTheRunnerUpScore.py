n = int(input())
arr = map(int, input().split())
arr = list(arr)
runnerUp = arr[0]
for i in range(n-1):
    if arr[i] < arr[i+1]:
        runnerUp = arr[i]
    elif arr[i] > arr[i+1]:
        runnerUp = arr[i+1]
    # print(arr)


print(runnerUp)

# 5
# 6 4 5 6 6

# 3
# -10 0 10

# 10
# 5 5 5 5 5 5 5 5 5 6

# 5
# 2 3 6 6 5

# 4
# 1 -1 -2 -1

# 5
# 8 7 6 5 4
