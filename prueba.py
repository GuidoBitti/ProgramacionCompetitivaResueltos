import random
a=input()
print(len(a))
def row():
    s = ''.join([char() for _ in range(1000)])
    return s

def char():
    n = random.randint(0, 1)
    if n == 0:
        return '.'
    else:
        return '#'

#with open('grilla_1000x1000.txt', 'w') as archivo:
    for _ in range(1000):
        archivo.write(row() + '\n')

print("Archivo 'grilla_1000x1000.txt' creado y contenido escrito exitosamente.")