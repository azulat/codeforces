n = int(input())
w, l, tx, ty = tuple(map(int, input().split()))

tejos = []

for _ in range(n):
    x, y = tuple(map(int, input().split()))
    dist_sq = ((tx-x)**2 + (ty-y)**2)
    tejos.append((dist_sq, 'A'))

for _ in range(n):
    x, y = tuple(map(int, input().split()))
    dist_sq = ((tx-x)**2 + (ty-y)**2)
    tejos.append((dist_sq, 'R'))

tejos.sort()

winner = tejos[0][1]
points = 0

for t in tejos:
    if t[1] == winner:
        points += 1
    else:
        break

print(f"{winner} {points}")
