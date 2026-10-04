numShops = int(input())
prices = sorted(list(map(int, input().split(' '))))

days = int(input())
spending = []
for _ in range(days):
    spending.append(int(input()))

freq = [0] * (100000 + 1)
for p in prices:
    freq[p] += 1

dp = [0] * (100000 + 1)
for i in range(100000):
    dp[i+1] = dp[i]  + freq[i+1]

for s in spending:
    if s >= 100000:
        print(numShops)
    else:
        print(dp[s])