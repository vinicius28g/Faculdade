palavra01 = input("infore seu nome ")
tam_nome = len(palavra01)
indice = 0
for indice in range(tam_nome, 0, -1):
    print(palavra01[:indice])