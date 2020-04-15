#variables
vetor = []
#soma = 0
#input + process
for(i) in range(0, 20):
    num = int(input("Digite um número para o vetor {0}/20: ".format(i + 1)))
    vetor.append(num)
    #soma += num
print(sum(vetor)) #soma