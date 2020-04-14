#variables
exc = 0
multa = 0
#input
peso = float(input("Digite o peso total: "))
#process
if(peso > 50):
    exc = (peso - 50)
    multa = (exc * 4)
print("Peso: {0:.2f}Kg".format(peso))
print("Excesso: {0:.2f}Kg".format(exc))
print("Multa: R${0:.2f}".format(multa))