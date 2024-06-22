def base3(n):
    if n == 0:
        return "0"

    a = []
    while n != 0:
        n, r = divmod(n, 3)
        if r == 2:
            r = -1
            n += 1
        a.append(r)

    t = ''.join(
        ['+' if d == 1 else '-' if d == -1 else '0' for d in reversed(a)])
    return t


test = int(input())
for _ in range(test):
    n = int(input())
    print(base3(n))