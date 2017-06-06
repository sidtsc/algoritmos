def incremento(num):
    x = num + 1
    return x;

def decremento(num):
    x = num - 1
    return x;

def modulo(x,y):
    z = x % y
    return z;

print("Opção 1 - Incremento")
print("Opção 2 - Decremento")
print("Opção 3 - Módulo de 2")
print("Opção 4 - Módulo de 5")
opcao = int(input("Escolha uma das opções: "))
num = int(input("Digite o número a ser calculado: "))
if opcao == 1:
    resultado = incremento(num)
elif opcao == 2:
    resultado = decremento(num)
elif opcao == 3:
    resultado = modulo(num,2)
elif opcao == 4:
    resultado = modulo(num,5)
else:
    print("Opção Inválida!!!")
    opcao = 0
if opcao != 0:
    print("O resultado é: ", resultado)
