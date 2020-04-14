#input
altura = float(input("Digite sua altura: "))
sexo = input("Qual é o seu sexo?[M/F] ")
#process
if(sexo.upper() == "M"):
    pideal = ((altura * 72.7) - 58)
elif(sexo.upper() == "F"):
    pideal = ((altura * 62.1) - 44.7)
else:
    pideal = 0
    print("Sexo inválido")
#output
print("O seu peso ideal é: {0:.2f}".format(pideal))