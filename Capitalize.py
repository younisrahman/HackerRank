
def solve(s):
    name = s.split()
    newName = ''
    for i in name:
        # print(i.capitalize(), end=' ')
        newName = newName + ' ' + i.capitalize()

    return newName[1:]


s = input()

result = solve(s)
print(result)
