import sqlite3
import comandos_SQL
import os

banco = sqlite3.connect('banco-clientes.db')
curso = banco.cursor()
indice_pesquisa = 0
#------------------- declaração das funções -----------------------------
def consulta_pCPF():
    try:
        os.mkdir("CPF")
    except:
        print("Pasta CPF já criada!")    

    CPF = input("Digite o CPF da pessoa: ")
    curso.execute(f"""SELECT Pessoa.*, Conta.*
                            FROM Pessoa
                            JOIN Conta ON
                            Pessoa.Conta = Conta.Titular
                            WHERE CPF = '{CPF}';""")
    info = curso.fetchone()

    if info:
        caminho_pasta = os.path.join(os.getcwd(), 'CPF')
        with open(os.path.join(caminho_pasta, CPF + ".txt"), 'w') as arquivo:
            arquivo.write("CPF: {}\n".format(CPF))
            arquivo.write("Primeiro nome: {}\n".format(info[1]))
            arquivo.write("Nome do meio: {}\n".format(info[2]))
            arquivo.write("Sobrenome: {}\n".format(info[3]))
            arquivo.write("Idade: {}\n".format(info[4]))
            arquivo.write("Conta: {}\n".format(info[5]))
            arquivo.write("Agência: {}\n".format(info[6]))
            arquivo.write("Número: {}\n".format(info[7]))
            arquivo.write("Saldo: {}\n".format(info[8]))
            arquivo.write("Gerente: {}\n".format(info[9]))
            arquivo.write("Titular: {}\n".format(info[10]))

            print("Informações salvas em {}.txt, na pasta CPF\n".format(CPF))
        with open(os.path.join(caminho_pasta, '{}.txt'.format(CPF)), 'r') as arquivo:
            for linha in arquivo:
                print(linha.strip())

    else:
        print("Pessoa não encontrada")

def consulta_idade():
    global indice_pesquisa

    try:
        print('para procurar por saldo informe primeiro o operador')
        print('1- todos as contas com a idade do titular >= X')
        print('2- todos as contas com a idade do titular <= X')
        print('3- todos as contas com a idade do titular = X')
        opicao = int(input())
        if opicao ==1:
            operador = ">="
        elif opicao ==2:
            operador = "<="
        elif opicao ==3:
            operador = "="

        valor= input("\nprocure uma pessoa pela sua idade. \nDigite a idade que quer procuarar: ")
        print("\n\n")
        print(comandos_SQL.pesquisa("Idade", operador,valor))
        pesquisas = curso.execute(comandos_SQL.pesquisa("Idade", operador,valor)) 
        if not os.path.exists("Idade"):
            os.mkdir("Idade")
        existe_registro = 0
        info = curso.fetchall()
        indice = str(indice_pesquisa)
        if info:
            caminho_pasta = os.path.join(os.getcwd(), 'Idade')
            quantidades_registro = 0
            existe_registro = 1
            with open(os.path.join(caminho_pasta, indice + ".txt"), 'w') as arquivo:
                for dados in info:
                    arquivo.write("CPF: {}\n".format(dados[0]))
                    arquivo.write("Primeiro nome: {}\n".format(dados[1]))
                    arquivo.write("Nome do meio {}\n".format(dados[2]))
                    arquivo.write("Sobrenome: {}\n".format(dados[3]))
                    arquivo.write("Idade: {}\n".format(dados[4]))
                    arquivo.write("Conta: {}\n".format(dados[5]))
                    arquivo.write("Agência: {}\n".format(dados[6]))
                    arquivo.write("Número: {}\n".format(dados[7]))
                    arquivo.write("Saldo: {}\n".format(dados[8]))
                    arquivo.write("Gerente: {}\n".format(dados[9]))
                    arquivo.write("Titular: {}\n".format(dados[10]))
                    arquivo.write("--------------------------------")
                    arquivo.write("\n")
                    quantidades_registro += 1
            
        else:
            print("Pessoa não encontrada")

        if existe_registro:
            print("Informações salvas em {}.txt, na pasta Idade\n".format(indice))
            arq_Saldo= open(os.path.join(caminho_pasta, indice + ".txt"), 'r')
            print(arq_Saldo.read())
            arq_Saldo.close()
        
        indice_pesquisa = int(indice)
        indice_pesquisa += 1
        print(f"quatidade de registro: {quantidades_registro}")
    
    except sqlite3.Error as error:
        print("erro ao abrir ou ler o arquivo ", error)
    print('\n\n')

def consulta_pnome():

    try:
        os.mkdir("Nomes")
    except:
        print("Pasta nomes já criada!")    

    pnome = input("Digite o primeiro nome da pessoa: ")
    curso.execute(f"""SELECT Pessoa.*, Conta.*
                            FROM Pessoa
                            JOIN Conta ON
                            Pessoa.Conta = Conta.Titular
                            WHERE Primeiro_Nome = '{pnome}';""")
    info = curso.fetchone()
    if info:
        caminho_pasta = os.path.join(os.getcwd(), 'Nomes')
        with open(os.path.join(caminho_pasta, pnome + ".txt"), 'w') as arquivo:
            arquivo.write("Primeiro nome: {}\n".format(pnome))
            arquivo.write("CPF: {}\n".format(info[0]))
            arquivo.write("Nome do meio: {}\n".format(info[2]))
            arquivo.write("Sobrenome: {}\n".format(info[3]))
            arquivo.write("Idade: {}\n".format(info[4]))
            arquivo.write("Conta: {}\n".format(info[5]))
            arquivo.write("Agência: {}\n".format(info[6]))
            arquivo.write("Número: {}\n".format(info[7]))
            arquivo.write("Saldo: {}\n".format(info[8]))
            arquivo.write("Gerente: {}\n".format(info[9]))
            arquivo.write("Titular: {}\n".format(info[10]))

            print("Informações salvas em {}.txt, na pasta Nomes\n".format(pnome))
        with open(os.path.join(caminho_pasta, '{}.txt'.format(pnome)), 'r') as arquivo:
            for linha in arquivo:
                print(linha.strip())

    else:
        print("Pessoa não encontrada")
    print('\n\n')

def menu():
    opcao = 1
    print('BEM VINDO AO SISTEMA DE CADASTRO')
    print('1- adicionar registro\n2- excluir registro\n3- modificar registro\n4- procurar registro\n5 - sair\n')
    opcao = int(input('escolha uma opcão:'))

    if opcao ==1:
        print('''1- Pessoa\n2- Contas''')
        tabela = ''
        opcao = int(input('informe o número de uma opcao'))
        if opcao == 1:
            tabela = 'Pessoa'
            #CPF, Primeiro_Nome, Nome_do_Meio, Sobrenome, Idade, Conta
            CPF = input('informe o CPF: ')
            Primeiro_Nome = input('informe o Primeiro_Nome: ')
            Nome_do_Meio = input('informe o Nome_do_Meio: ')
            Sobrenome = input('informe o Sobrenome: ')
            Idade = int(input('informe o idade: '))
            banco.execute(f"""
                        INSERT OR IGNORE INTO Pessoa (CPF, Primeiro_Nome, Nome_do_Meio, Sobrenome, Idade)
                        VALUES ('{CPF}', '{Primeiro_Nome}', '{Nome_do_Meio}', '{Sobrenome}', '{Idade}')
                    """) 
            banco.commit()
            print('regstro adicionado')
            input()
            os.system('cls' if os.name == 'nt' else 'clear')
        elif opcao == 2:
            tabela = 'Conta'
            #Agência, Número, Saldo, Gerente, Titular
            agencia = int(input('informe a agencia: '))
            Número = int(input('informe o Número: '))
            Saldo = int(input('informe o Saldo: '))
            Gerente = int(input('informe o Gerente: '))
            banco.execute(f'''INSERT OR IGNORE INTO Conta (Agência, Número, Saldo, Gerente)
            VALUES ('{agencia}', '{Número}', '{Saldo}', '{Gerente}')''')
            banco.commit()
            print('regstro adicionado')
            input()
            os.system('cls' if os.name == 'nt' else 'clear')
        elif opcao <1 and opcao>2:
            print('opção errada, escolha outra por favor\n')
            menu()
    elif opcao ==2:
            print('''1- Pessoa\n2- Contas''')
            opcao = int(input('informe o número de uma opcao'))
            if opcao == 1:
                chave = input('inforem o cpf do registro que deseja excluir')
                curso.execute(comandos_SQL.delete_pessoa(chave))
                banco.commit()
                print('registro apagado')
                input()
                os.system('cls' if os.name == 'nt' else 'clear')
            elif opcao == 2:
                chave = input('informe o titular do registro que deseja excluir')
                curso.execute(comandos_SQL.delete_conta(chave))
                banco.commit()
                print('registro apagado')
                input()
                os.system('cls' if os.name == 'nt' else 'clear')
            elif opcao <1 and opcao>2:
                print('opção errada, escolha outra por favor\n')
                menu()
    elif opcao ==3:
        curso.execute(comandos_SQL.alterar_dados()) 
        banco.commit()
        print('regstro alterado')
        input()
        os.system('cls' if os.name == 'nt' else 'clear')
    elif opcao ==4:
        print('procurar registro por qual intem?')
        print('1- CPF\n2- idade\n3- por nome')
        opcao = int(input('digite o numero da opcao: '))
        if opcao == 1:
            consulta_pCPF()
            input()
            os.system('cls' if os.name == 'nt' else 'clear')
        elif opcao ==2:
            consulta_idade()
            input()
            os.system('cls' if os.name == 'nt' else 'clear')
        elif opcao ==3:   
            consulta_pnome()
            input()
            os.system('cls' if os.name == 'nt' else 'clear')
        elif opcao <1 and opcao>3:
            print("opção errada, tente novamente")
            menu()
    elif opcao ==5:
        exit()
    elif opcao <1 and opcao > 5:
        print('opção incorreta, digite outra opcão')
        menu()
try:

    banco.execute(comandos_SQL.criar_tabelas_pessoas())
    print('criou pessoa')
    banco.execute(comandos_SQL.criar_tabelas_contas())
    print('criou conta')

    print("\ntabelas do banco de dados criada!")

except sqlite3.Error as error:
    print("erro ao criar tabelas")
    print("erro 0 ", error)

with open('nomes.txt', 'r') as arquivo_n:
    linhas = arquivo_n.readlines()

try:  
    # Percorra cada linha e insira na tabela
    for linha in linhas:
        dados = linha.split()
        curso.execute(comandos_SQL.enseri_dados_pessoas(dados[0],dados[1],dados[2],dados[3],dados[4], dados[5]))
    arquivo_n.close()
    print("\nDados já inseridos na tabela Pessoa!")
    arquivo_n.close()

except sqlite3.Error as error:
    print("\nerro ao encerir na tabela Pessoa")
    print("erro 01", error)

try:
    with open('contas.txt', 'r') as arquivo_c:
        linhas = arquivo_c.readlines()

    for linha in linhas:
        dados = linha.split()
        curso.execute(comandos_SQL.enseri_dados_Conta(dados[0], dados[1], dados[2], dados[3], dados[4]))
    arquivo_c.close()
    print("\nDados já inseridos na tabela Conta!")

except sqlite3.Error as error:
    print("\nErro ao encerir dados na tabela Conta")
    print("erro 02", error)
    #print("Algo deu errado", error)

banco.commit()
#teste das funções
while(True):
    menu()
curso.close()

