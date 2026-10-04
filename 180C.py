s = [1 if c.islower() else 0 for c in input()]

post_zero = True
post_one = True

opt_one = 0
opt_zero = 0

one_post_zero = 0
zero_post_one = 0

for n in s:
    if n == 0:
        post_zero = True
        if post_one:
            zero_post_one += 1
            opt_one += one_post_zero
            one_post_zero = 0
    elif n == 1:
        post_one = True
        if post_zero:
            one_post_zero += 1
            opt_zero += zero_post_one
            zero_post_one = 0

print(min(opt_zero, opt_one))