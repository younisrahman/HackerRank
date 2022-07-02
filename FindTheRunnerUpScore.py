n = int(input())
arr = map(int, input().split())
runnerUp = 0
for i in range(n-1):
    if arr[i] > arr[i+1]:
        runnerUp = arr[i+1]

print(runnerUp)
