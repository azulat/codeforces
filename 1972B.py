t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    u = s.count('U') % 2 == 0
    if u:
        print('NO')
    else:
        print('YES')