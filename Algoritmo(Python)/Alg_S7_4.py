#variables
media = 0
maior = 0
menor = 9999 
#input + process
for(i) in range(1, 11):
    N = int(input("Digite um número: "))
    if(N > maior):
        maior = N
    if(N < menor):
        menor = N
    media = (media + (N / 10))
print("Maior número: {0}".format(maior))
print("Menor número: {0}".format(menor))
print("Media: {0}".format(media))