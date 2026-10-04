# Tung Tung Sahur

t = int(input())

for _ in range(t):
    p = input()
    s = input()

    i, j = 0, 0
    end = False
    
    while i < len(p):
        cur = p[i]
        p_count = 0
        s_count = 0
        
        while i < len(p) and p[i] == cur:
            i += 1
            p_count += 1
        
        while j < len(s) and s[j] == cur:
            j += 1
            s_count += 1

        if s_count < p_count or s_count > 2 * p_count:
            print('NO')
            end = True
            break

    if end: continue

    if j < len(s):
        print('NO')
    else:
        print('YES')