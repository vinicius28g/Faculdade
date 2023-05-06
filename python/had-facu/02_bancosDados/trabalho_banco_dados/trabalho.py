import sqlite3

def tabela_pessoa():

    return f"""
    CREATE TABLE IF NOT EXISTS Pessoa(
        id_pessoa INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT,
        cpf varchar(14) NOT NULL UNIQUE,
        primeiro_nome varchar(20) NOT NULL,
        nome_meio varchar(20) NOT NULL,
        sobrenome varchar(20) NOT NULL,
        idade INTEGER NOT NULL,
        conta INTEGER NOT NULL
    );"""

def tabela_contas():

    return f"""
    CREATE TABLE  contas(
        id_conta INTEGER AUTOINCREMET PRIMARY KEY.
        agencia varchar(6) NOT NULL,
        numero VARCHAR(7) NOT NULL,
        saldo DOUBLE NOT NULL,
        gerente varchar(50)

    );
    """
    
def enseri_dados_pessoas(cpf, primeiro_nome, nome_meio, sobrenome, idade, conta):
    return f"""
        INSERT INTO Pessoa (cpf, primeiro_nome, nome_meio, sobrenome, idade, conta)
        VALUES ('{cpf}', '{primeiro_nome}', '{nome_meio}', '{sobrenome}', '{idade}', '{conta}')
    """

try:
    conexao = sqlite3.connect('trabalho.db')
    cursor = conexao.cursor()
    print('conxão concluida')
    cursor.execute(tabela_pessoa())
    cursor.execute(enseri_dados_pessoas('622.360.763-90', 'vitoria', 'regina', 'Santos', 20, 3))
    print('chegu1')
    conexao.commit()
    print('chegu')
    cursor.close()
    conexao.close()
    print("22")
    
    print('coneção encerrada')
    
except sqlite3.Error as Erro:
    print('Deu ruimmmm', Erro)
