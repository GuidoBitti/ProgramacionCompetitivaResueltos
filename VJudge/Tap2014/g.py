def maxcedes(N, puntajes):
    puntajes.sort(reverse=True)
    a = []
    cambios = 0
    german_puntos = 0
    gianina_puntos = 0

    for i in range(0, N, 2):
        german_puntos += puntajes[i]
        gianina_puntos += puntajes[i+1]
        a.append(puntajes[i]-puntajes[i+1])

    if german_puntos <= gianina_puntos:
        return -1
    else:
        a.sort()
        i = 0
        while german_puntos > gianina_puntos and i <= len(a):
            german_puntos -= a[i]
            gianina_puntos += a[i]
            if german_puntos > gianina_puntos:
                cambios += 1
                i += 1
            else:
                break
        return cambios


test = int(input())
for _ in range(test):
    N = int(input())
    puntajes = list(map(int, input().split()))

    print(max_cedes(N, puntajes))