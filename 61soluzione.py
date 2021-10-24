listaNumeri = []

for i in range(5):
    numero = input("Inserisci un numero: ")
    numero = int(numero)

    listaNumeri.append(numero);

listaNumeri.sort()

print(listaNumeri)
