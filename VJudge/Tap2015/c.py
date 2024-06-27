bandera=True
while(bandera):
    try:
        n, s, j, d = map(int, input().split())
        l = input()
        ca = 0
        cb = 0
        ga = 0
        gb = 0
        sa = 0
        sb = 0

        for i in range(len(l)):
            if l[i] == "A":
                ca += 1
            else:
                cb += 1

            if ca >= j and ca-cb >= d:
                sa += 1
                ca = 0
                cb = 0
            elif cb >= j and cb-ca >= d:
                sb += 1
                ca = 0
                cb = 0

        print(sa, sb)
    except:
        bandera=False