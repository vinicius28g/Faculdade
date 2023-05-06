def valida_data(data):
    try: 
        dia, mes, ano = map(int, data.split('/'))
        if mes < 1 or mes > 12 or ano <= 0:
                return False
        if mes in (1, 3, 5, 7, 8, 10, 12):
                ultimo_dia = 31
        elif mes == 2:
                if (ano % 4 == 0) and (ano % 100 != 0 or ano % 400 == 0):
                    ultimo_dia = 29
                else:
                    ultimo_dia = 28
        else:
            ultimo_dia = 30
        if dia < 1 or dia > ultimo_dia:
                return False
        return True
    except ValueError:
          return False
    
meses = ['', 'Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'agosto', 'Setembro', 'outubro', 'Novembro', 'Desembro']
data_atual = input('digite um data no formato DD/MM/AAAA: ')

if valida_data(data_atual):
    dia, mes, ano = map(int, data_atual.split('/'))
    data_formatada = f"{dia} de {meses[mes]} de {ano}"
    print(data_formatada)
else:
    print('data invalida')