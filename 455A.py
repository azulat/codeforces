n = int(input())
a = sorted(list(map(int, input().split(' '))))

MAX_N = 10**5 + 1

freq = [0] * MAX_N
for i in a:
    freq[i] += 1

for i in range(len(freq)):
    freq[i] *= i

dp = freq[:2] + [0] * (MAX_N - 2)

for i in range(1, len(dp) - 1):
    dp[i+1] = max(dp[i-1] + freq[i+1], dp[i])

print(dp[-1])