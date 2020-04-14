#input
idade = int(input("Digite a idade do nadador: "))
#process
if(idade >= 18):
    print("Adulto")
elif(idade >= 14):
    print("Juvenil-B")
elif(idade >= 12):
    print("Juvenil-A")
elif(idade >= 8):
    print("Infantil-B")
elif(idade >= 5):
    print("Infantil-A")