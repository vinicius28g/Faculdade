def procura_letra(frase, caracter):
    quant_carc = 0
    for letra in range(0, len(frase)):
        if frase[letra] == caracter.lower() or frase[letra] == caracter.upper():
            quant_carc += 1
    return quant_carc

requisicao = [' ', 'a', 'e', 'i', 'o', 'u']
#requisicao = [' ', 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U']
frase = input('digiete uma frase qualquer: ')
for intem in requisicao:
    print(f'quantidade de {intem}: {procura_letra(frase, intem)}')




