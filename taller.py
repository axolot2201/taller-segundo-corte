vertices = []
n = int(input("Ingrese el número de vértices: "))

for i in range(n):
    x = float(input(f"ingrese la coordenada x {i+1}: "))
    y = float(input(f"ingrese la coordenada y {i+1}: "))
    z = float(input(f"ingrese la coordenada z {i+1}: "))
    vertices.append((x, y, z))

caras = []
a = int(input("Ingrese el número de caras: "))

for i in range(a):
    c1 = int(input(f"ingrese c1 {i+1}: "))
    c2 = int(input(f"ingrese c2 {i+1}: "))
    c3 = int(input(f"ingrese c3 {i+1}: "))
    caras.append((c1, c2, c3))

print("codigo OBJ:")

for v in vertices:
    b= "v"
    for c in v:
        b += f"{c}"
    print(b)

for c in caras:
    f = "f "
    for i in c:
        f+= f"{i}"
    print(f)
