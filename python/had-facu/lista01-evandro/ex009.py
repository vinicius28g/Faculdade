import re
soma = 0
cont = 0
digito = 0

cpf = input('informe um cpf: ')
cpf = re.sub('[^0-9]', '', cpf)
cpf_ax = cpf[:9]
for numero in range(10,1,-1):
    soma += int(cpf[cont])* numero
    #coloquei < 9 pq so queria os 9 priemiros numeros do cpf
    if cont < 9:
        cont += 1
    else:
        break
if soma % 11 < 2:
    digito = 0
else:
    digito = 11 - soma % 11 
# concateno o verificador1 (digito) com uma vairavel auxiliar para comprar dps
cpf_ax = cpf_ax + str(digito)

soma = 0
cont = 0
for numero in range(11,1,-1):
    soma += int(cpf[cont])* numero
    #coloquei < 10 pq so queria os 9 priemiros numeros do cpf
    if cont < 10:
        cont += 1
    else:
        break
if soma % 11 < 2:
    digito = 0
else:
    digito = 11 - soma % 11 
cpf_ax = cpf_ax + str(digito)


if cpf == cpf_ax:
    print('cpf valido')
else:
    print('cpf invalido')
