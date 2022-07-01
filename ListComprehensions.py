x, y, z, n = map(int, input().split())

list = [[i, j, k] for i in range(x+1) for j in range(y+1)
        for k in range(z+1) if i+j+k != n]
print(list)
