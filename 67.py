dispensa = { "banane": 7, "uova": 12, "mele": 5, "pesche": 4 }

dispensa["fragole"] = 10;

print("Cibo nella dispensa: ")

for key in list(dispensa.keys()):
    print(key)

print()

for key in list(dispensa.keys()):
    print("Numero di " + key + ": " + str(dispensa[key]))


