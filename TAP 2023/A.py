n, m = tuple(map(int, input().split()))
alf = list(map(int, input().split()))
workers = list(map(int, input().split()))

ans = []

for i in range(n):

    dados = 0

    for j in range(m):
        if dados + workers[j] <= alf[i]:
            dados += workers[j]

    ans.append(alf[i] - dados)

print(' '.join(map(str, ans)))