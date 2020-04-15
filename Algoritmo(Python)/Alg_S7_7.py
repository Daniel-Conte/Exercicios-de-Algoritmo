#variables
quantidade = 0
q1 = 0
q2 = 0
q3 = 0
q4 = 0
#input
print("0 - Finaliza")
cod = int(input("Digite o id do mouse: "))
while(cod != 0):
    print("[1] Necessita de esfera")
    print("[2] Necessita de limpeza")
    print("[3] Necessita troca do cabo ou conector")
    print("[4] Quebrado ou inutilizado")
    defeito = int(input("Digite a situação do mouse: "))
    #process
    while((defeito < 1) or (defeito > 4)):
        print("Número inválido")
        defeito = int(input("Digite a situação do mouse: "))
    quantidade += 1
    if(defeito == 1):
        q1 += 1
    elif(defeito == 2):
        q2 += 1
    elif(defeito == 3):
        q3 += 1
    elif(defeito == 4):
        q4 += 1
    p1 = (q1 * 100 / quantidade)
    p2 = (q2 * 100 / quantidade)
    p3 = (q3 * 100 / quantidade)
    p4 = (q4 * 100 / quantidade)
    cod = int(input("Digite o id do mouse: "))
#output
print("Quantidade de mouses: {0}".format(quantidade))
print("SITUAÇÃO                                     QUANTIDADE    PERCENTUAL")
print("[1] Necessita de esfera                         {0}            {1:.2f}".format(q1, p1))
print("[2] Necessita de limpeza                        {0}            {1:.2f}".format(q2, p2))
print("[3] Necessita troca do cabo ou conector         {0}            {1:.2f}".format(q3, p3))
print("[4] Quebrado ou inutilizado                     {0}            {1:.2f}".format(q4, p4))