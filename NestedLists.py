names = {}
minimun = 0
for i in range(int(input())):

    name = input()
    score = float(input())
    if i == 0:
        minimun = score
    if score < minimun:
        minimun = score
        names = {name}
    elif minimun == score:
        names.add(name)
print(names)
