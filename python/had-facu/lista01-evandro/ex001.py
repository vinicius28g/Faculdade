palavra01 = input("informa uma palavra/ frase: ")
palavra02 = input("informa uma palavra/ frase: ")
print(f'tamanho de \"{palavra01}\" : {len(palavra01)} caracteres')
print(f'tamanho de \"{palavra02}\" : {len(palavra02)} caracteres')

if len(palavra01) == len(palavra02):
    print( 'as duas string são de tamanhos iquais')
else:
    print( 'as duas string são de tamanhos difrentes')
if palavra01 == palavra02:
    print( 'as duas string são de conteudos iquais')
else:
     print( 'as duas string são de conteudos diferentes')