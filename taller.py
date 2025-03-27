vertices = []
n = int(input("Ingrese el número de vértices: "))
for i in range(n):
    x, y, z = input(f"Ingrese las coordenadas del vértice {i+1} (x y z): ")
    vertices.append((float(x), float(y), float(z)))
