print ("Exemplo de Operadores Lógicos")

correctUser1 = "Euclides"
correctPassword1 = "123456"

correctUser2 = "Devmedia"
correctPassword2 = "admin"

inputUser = input("Type your name: ")
inputPassword = input("Type your password: ")

if(inputUser == correctUser1 and inputPassword == correctPassword1) or (inputUser == correctUser2 and inputPassword == correctPassword2):
    print("You login is ok")
else:
    print("Login Error")
