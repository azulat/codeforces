t = int(input())

for _ in range(t):
    a = list(map(int, input().split(' ')))
    a_max = max(a)
    a.remove(a_max)

    print(f"{-sum(a)+a_max}")
