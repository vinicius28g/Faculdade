import sqlite3

def cria_tabelas(tabela):

    return f"""
    CREATE TABLE {tabela}(
        id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
        nome TEXT NOT NULL,
        idade INTEGER,
        cpf VARCHAR(11) NOT NULL,
        email TEXT NOT NULL,
        fone TEXT,
        cidade TEXT,
        uf VARCHAR(2) NOT NULL,
        criado_em DATE NOT NULL
    );
    """
    
def enseri_dados(tabela, nome, idade, cpf, email, fone, cidade, uf, data):
    return f"""
        INSERT INTO {tabela} (nome, idade, cpf, email, fone, cidade, uf, criado_em)
        VALUES ('{nome}', {idade}, '{cpf}', '{email}', '{fone}', '{cidade}', '{uf}', '{data}')
    """

try:
    conexao = sqlite3.connect('teste.db')
    cursor = conexao.cursor()
    print('conxão concluida')
    #print(cria_tabelas('cliente'))
    #print(enseri_dados('cliente', 'Fulano', 35, '00000000000', 'fulano@estacio.br', '(86)99999-9999', 'Teresina', 'PI', '2023-03-24' ))
    cursor.execute(cria_tabelas('cliente'))
    cursor.execute(enseri_dados('cliente', 'Fulano', 35, '00000000000', 'fulano@estacio.br', '(86)99999-9999', 'Teresina', 'PI', '2023-03-24' ))
    print('chegu1')
    conexao.commit()
    print('chegu')
    conexao.close()
    cursor.close()
    print('coneção encerrada')
    
except sqlite3.Error as Erro:
    print('Deu ruimmmm', Erro)
