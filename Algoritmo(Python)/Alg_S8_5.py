#variables
vetor = []
maior = False
#input + process
for(i) in range(0, 10):
    num = int(input("Digite um número para o vetor {0}/9: ".format(i)))
    vetor.append(num)
for(i) in (vetor):
    if(i > 50):
        print("Valor {0} maior que 50 na posição {1}".format(i, vetor.index(i)))
        maior = True
if(maior == False):
    print("Nenhum número maior que 50 foi digitado")