#input
nome = input("Digite seu nome de usuário: ")
senha = input("Digite sua senha: ")
while(nome == senha):
    print("Dados inválidos")
    nome = input("Digite seu nome de usuário: ")
    senha = input("Digite sua senha: ")