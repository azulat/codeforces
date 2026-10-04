t = int(input())

V = 'ae'
C = 'bcd'

for _ in range(t):
    n = int(input())
    word = input()
    syllables = []
    state = ''

    for i in range(0, n):
        if word[i] in C:
            if state == 'CV':
                state += 'C'
            elif state == 'CVC':
                syllables.append(word[i-3:i])
                state = 'C'
            else:
                state = 'C'
        else:
            if state == 'CVC':
                state = 'CV'
                syllables.append(word[i-3:i-1])
            else:
                state += 'V'

        if i == n-1 and state != '':
            r = len(state) - 1
            syllables.append(word[i-r:])

    print('.'.join(syllables))
