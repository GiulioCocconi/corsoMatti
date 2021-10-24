lista = []

for i in range(5):
    numero = input("Inserisci un numero: ")
    lista.append(numero)

insieme = set(lista)
lista = list(insieme)
lista.sort(reverse=True)
print(lista)
