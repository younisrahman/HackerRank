
def solve(s):
    name = s.split()
    newName = s
    for i in name:
        # print(i.capitalize(), end=' ')
        newName = newName.replace(i, i.capitalize())

    return newName


s = input()

result = solve(s)
print(result)
