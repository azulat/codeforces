s = input()
w = "TAP"

for c in s:
    if w and w[0] == c:
        w = w[1:]

if not w:
    print('S')
else:
    print('N')