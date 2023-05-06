from num2words import num2words
numero = int(input('digite um numero: '))
numero = num2words(numero, lang='pt-br')
print(f'numero em extenso é: {numero}')