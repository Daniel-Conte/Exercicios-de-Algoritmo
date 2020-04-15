#input
N = int(input("Digite um número: "))
while((N < 1) or (N > 10)):
    print("O número deve estar entre 1 e 10")
    N = int(input("Digite um número: "))
for(i) in range(1, 11):
    R = (N * i)
    print("{0} x {1} = {2}".format(N, i, R))