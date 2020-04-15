#variables
vetor1 = []
vetor2 = []
soma = []
#input + process
for(i) in range(0, 10):
    num1 = int(input("Digite um número para o vetor1 {0}/10: ".format(i + 1)))
    vetor1.append(num1)
    num2 = int(input("Digite um número para o vetor2 {0}/10: ".format(i + 1)))
    vetor2.append(num2)
    soma.append(num1 + num2)
for(j) in (soma):
    print(j)