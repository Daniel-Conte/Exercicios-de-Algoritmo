#variables
maior = 0
#input
print("0 - Finaliza")
N = int(input("Digite um número: "))
#process
while(N != 0):
    if(N > maior):
        maior = N
    N = int(input("Digite um número: "))
print("O maior número é: {0}".format(maior))