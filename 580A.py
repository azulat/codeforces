n = int(input())
a = list(map(int, input().split(' ')))

dp = [1] + [0] * (n - 1)
for i in range(1, n):
    dp[i] = dp[i-1] + 1 if a[i] >= a[i-1] else 1

print(max(dp))