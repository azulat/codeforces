n = int(input())
t = [tuple(map(int, input().split(' '))) for _ in range(n)]

if n <= 2:
    print(n)
else:
    ac = 2
    last = t[0][0]

    for i in range(1, len(t) - 1):
        if t[i][0] - t[i][1] > last:
                ac += 1
                last = t[i][0]
        elif t[i][0] + t[i][1] < t[i+1][0]:
            ac += 1
            last = t[i][0] + t[i][1]
        else:
            last = t[i][0]

    print(ac)