names = set()
minimun = 0
lowest = 0
for i in range(int(input())):

    name = input()
    score = float(input())
    if i == 0:
        lowest = score
        minimun = score
    if score < lowest:
        lowest = score

    if score > lowest and score < minimun:
        names = {name}
        minimun = score
    elif score == minimun:
        names.add(name)

names = sorted(names)
for i in names:
    print(i)

# 4
# Prashant
# 32
# Pallavi
# 36
# Dheeraj
# 39
# Shivam
# 40

# 5
# Harry
# 37.21
# Berry
# 37.21
# Tina
# 37.2
# Akriti
# 41
# Harsh
# 39
