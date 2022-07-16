def countingValleys(steps, path):
    # Write your code here
    count = 0
    result = 0

    for i in path:
        if i == 'D':
            count -= 1
        else:
            count += 1
        if count == 0 and i == 'U':
            result += 1
    return result


steps = int(input().strip())

path = input()

result = countingValleys(steps, path)

print(result)
