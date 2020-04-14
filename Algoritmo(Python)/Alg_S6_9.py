#input
poluicao = float(input("Digite o valor da poluição: "))
#process
if(poluicao >= 0.5):
    print("Todos os grupos: Suspender Atividades")
elif(poluicao >= 0.4):
    print("Grupos 1 e 2: Suspender Atividades")
elif(poluicao >= 0.3):
    print("Grupo 1: Suspender Atividades")
else:
    print("Níveis Aceitáveis")