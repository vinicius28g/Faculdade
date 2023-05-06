import os
import sqlite3

banco = sqlite3.connect('banco-clientes.db')
curso = banco.cursor()

def criar_tabelas_pessoas():
    return ''' CREATE TABLE IF NOT EXISTS Pessoa (
    CPF varchar(14) PRIMARY KEY, 
    Primeiro_Nome text, 
    Nome_do_Meio text, 
    Sobrenome text, 
    Idade integer, 
    Conta integer
);'''

def criar_tabelas_contas():
    return "CREATE TABLE IF NOT EXISTS Conta (Agência integer, Número integer, Saldo real, Gerente integer, Titular integer PRIMARY KEY  )"

def enseri_dados_pessoas(cpf, primeiro_nome, nome_meio, sobrenome, idade, conta):
    return f"""
        INSERT OR IGNORE INTO Pessoa (CPF, Primeiro_Nome, Nome_do_Meio, Sobrenome, Idade, Conta)
        VALUES ('{cpf}', '{primeiro_nome}', '{nome_meio}', '{sobrenome}', '{idade}', '{conta}')
    """

def enseri_dados_Conta(agencia, numero, saldo, gerente, titualar):
    return f"""
        INSERT OR IGNORE INTO Conta (Agência, Número, Saldo, Gerente, Titular)
        VALUES ('{agencia}', '{numero}', '{saldo}', '{gerente}', '{titualar}')
    """
def alterar_dados():
    print('''1- Pessoa\n2- Contas''')
    tabela = ''
    chave = ''
    campo_primary =''
    opcao = int(input('informe o número de uma opcao: '))
    if opcao == 1:
        tabela = 'Pessoa'
        chave = input('informe o CPF dessa pessoa')
        campo_primary = 'CPF'
    elif opcao == 2:
        tabela = 'Conta'
        chave = input('informe o Titular da conta: ')
        campo_primary = 'Titular'
    elif opcao <1 and opcao>2:
        print('opção errada, escolha outra por favor\n')
        alterar_dados()
    campo = input('informe o campo que deseja alterar: ')
    auteracao = input('informe a auteração que deseja fazer: ')

    return f"""UPDATE  {tabela} 
            SET {campo}= '{auteracao}'  
            WHERE {campo_primary} = '{chave}';"""

def alterar_dados_contas(campo, auteracao, titualar):
    return f"""UPDATE  Conta
            SET {campo}= '{auteracao}'  
            WHERE Titular = '{titualar}';"""

def delete_pessoa(cpf):
    return f"""DELETE FROM Pessoa
                WHERE CPF = '{cpf}';"""

def delete_conta(titular):
    return f"""DELETE FROM Conta
                WHERE Titular = '{titular}';"""

def pesquisa(coluna, operador, valor):
    return f'''SELECT Pessoa.*, Conta.*
                FROM Pessoa
                JOIN Conta ON  Pessoa.Conta = Conta.Titular
                WHERE {coluna} {operador} '{valor}' '''

def adiciona_registro( ultimo_registro):
    print('''1- Pessoa
    2- Contas''')
    tabela = ''
    opcao = int(input('informe o número de uma opcao'))
    if opcao == 1:
        tabela = 'Pessoa'
        #CPF, Primeiro_Nome, Nome_do_Meio, Sobrenome, Idade, Conta
        CPF = input('informe o CPF: ')
        Primeiro_Nome = input('informe o Primeiro_Nome: ')
        Nome_do_Meio = input('informe o Nome_do_Meio: ')
        Sobrenome = input('informe o Sobrenome: ')
        Idade = int(input('informe o CPF: '))
        Idade = int(input('informe o CPF: '))
        ultimo_registro += 1

    elif opcao == 2:
        tabela = 'Conta'
    elif opcao <1 & opcao>2:
        print('opção errada, escolha outra por favor\n')
        adiciona_registro()
    
    