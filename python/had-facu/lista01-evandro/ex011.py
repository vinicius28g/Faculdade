import random
arquivo = open('arqEx011.txt', 'r')
palavras = []
palavra = ''
erro = 0
dica = 'tem em casa'
letra_usua = ''
def figura_erro(num_erro):
    if num_erro == 0:
        print('----')
        print('   |')
        print('  ()')
        print(' /|\\')
        print('  |')
        print('  /\\')
    elif num_erro == 1:
        print('----')
        print('   |')
        print('  ()')
        print(' /|\\')
        print('  |')
        print('  /')
    elif num_erro == 2:
        print('----')
        print('   |')
        print('  ()')
        print(' /|\\')
        print('  |')
    elif num_erro == 3:
        print('----')
        print('   |')
        print('  ()')
        print(' /|')
        print('  |')
    elif num_erro == 4:
        print('----')
        print('   |')
        print('  ()')
        print('  |')
        print('  |')
    elif num_erro == 5:
        print('----')
        print('   |')
        print('  ()')
    elif num_erro == 6:
        print('                ----')
        print('                   |\n')
        print('  /|  /|  |====|  |===|  |===|  |===  |   |')
        print(' / | / |  |    |  |  /   |  /   |===  |   |')
        print('/  |/  |  |====|  |  \\   |  \   |===  |===|')
  
for linha in arquivo:
    palavra = linha.strip()
    palavras.append(palavra)
arquivo.close()
# palavra vai passar a ser valida como a palvvra da forca
palavra = palavras[random.randint(0, len(palavras)+1)]
while erro <=6:
    print(f'quantidade de erro {erro}')
    figura_erro(erro)
    print(dica)
    if erro == 0:
        for caracter in range(0, len(palavra)):
            print('_ ', end='')
    elif:
        print('\n')
        letra_usua = input('informe uma letra')
        for caracter in range(0, len(palavra)):
            if letra_usua == palavra[caracter]:
                for espaso in range(0,caracter):
                    print(' ', end='')
                    print(palavra[caracter])
            else:
                erro += 1
        print('_ ', end='')

   
