t = int(input())

for _ in range(t):
    n = int(input())
    a = [(x+1) for x in range(3*n)]

    p = []
    for i in range(n):
        p += list(map(str, [a[i], a[-(2*i+1)], a[-2*(i+1)]]))
    print(' '.join(p))