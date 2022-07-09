def sockMerchant(n, ar):
    # Write your code here
    ar.sort()
    count = 0
    dictonary = {}
    for i in ar:
        if i in dictonary:
            dictonary[i] += 1
        else:
            dictonary[i] = 1
    for i in dictonary:
        count += int(dictonary[i] / 2)
    return count


n = int(input().strip())

ar = list(map(int, input().rstrip().split()))

print(result=sockMerchant(n, ar))
