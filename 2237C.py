t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split(' ')))
    
    acc = a[0]
    for i in range(0, n-1):
        if acc > a[i+1]:
            acc += a[i+1]
        else:
            acc = a[i+1]
            continue
    
    print(acc)