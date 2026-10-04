n = int(input())

xs, ys = [], []
for _ in range(n):
    (x, y) = tuple(map(int, input().split(' ')))
    xs.append(x)
    ys.append(y)

min_x, min_y = min(xs) - 1, min(ys) - 1
max_x, max_y = max(xs) + 1, max(ys) + 1
length = 2 * (max_x - min_x) + 2 * (max_y - min_y)

print(length)