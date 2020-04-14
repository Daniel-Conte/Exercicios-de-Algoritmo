#input
num = int(input("Digite um número: "))
#process
if(num % 2 == 0):
    print("Este número é PAR")
    if(num > 0):
        print("Este número é POSITIVO")
    else:
        print("Este número é NEGATIVO")
else:
    print("Este número é IMPAR")
    if(num > 0):
        print("Este número é POSITIVO")
    else:
        print("Este número é NEGATIVO")