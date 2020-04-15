#variables
vetor = []
#input
print("0 - Finaliza")
print("1 - Ordem direta")
print("2 - Ordem inversa")
cod = int(input("Digite um código: "))
if(cod != 0):
    while((cod < 0) or (cod > 2)):
        print("Código inválido")
        cod = int(input("Digite um código: "))
    for(i) in range(0, 5):
        num = float(input("Digite um número: "))
        vetor.append(num)
    if(cod == 1):
        for(i) in (vetor):
            print(i)
    else:
        vetor.reverse()
        for(i) in (vetor):
            print(i)