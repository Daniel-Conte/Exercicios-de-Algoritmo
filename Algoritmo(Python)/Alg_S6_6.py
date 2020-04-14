#variables
exc = 0
#input
cod = int(input("Digite o código do funcionário: "))
horas = int(input("Digite a quantidade de horas trabalhadas: "))
#process
if(horas > 50):
    exc = ((horas - 50) * 20)
    salario = (500 + exc)
else:
    salario = (horas * 10)
print("Salário TOTAL: {0}".format(salario))
print("Salário EXCEDENTE: {0}".format(exc))
