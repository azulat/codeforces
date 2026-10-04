t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    q0 = s.count('0')
    q1 = len(s) - q0

    s_parity = len(s) % 2 == 0
    zero_parity = q0 % 2 == 0
    one_parity = q1 % 2 == 0

    if zero_parity and not one_parity:
        print(-1)
    elif zero_parity:
        q1 = len(s) - q0
        print(q1)

        if q1 > 0:
            idxs = [str(i+1) for i in range(len(s)) if s[i] == '1']
            print(' '.join(idxs))
    else:
        print(q0)

        if q0 > 0:
            idxs = [str(i+1) for i in range(len(s)) if s[i] == '0']
            print(' '.join(idxs))