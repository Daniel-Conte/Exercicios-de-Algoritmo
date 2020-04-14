#input
num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))
num3 = int(input("Digite o terceiro número: "))
num4 = int(input("Digite o quarto número: "))
#process
q1 = (num1 * num1)
q2 = (num2 * num2)
q3 = (num3 * num3)
q4 = (num4 * num4)
if(q3 >= 1000):
    print("Número: {0} Quadrado: {1}".format(num3,q3))
else:
    print("Número: {0} Quadrado: {1}".format(num1,q1))
    print("Número: {0} Quadrado: {1}".format(num2,q2))
    print("Número: {0} Quadrado: {1}".format(num3,q3))
    print("Número: {0} Quadrado: {1}".format(num4,q4))