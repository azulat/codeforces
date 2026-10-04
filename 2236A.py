t = int(input())

for _ in range(t):
    _ = int(input())
    h = list(map(int, input().split(' ')))
    
    h_max = max(h)
    h_min = min(h)

    print(f"{h_max - h_min + 1}")
    