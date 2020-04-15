#variables
vetor = []
#input
for(i) in range(0, 10):
    num = int(input("Digite um número para o vetor {0}/10: ".format(i + 1)))
    vetor.append(num)
vetor.reverse() #inverte a ordem
for(i) in (vetor):
    print(i)