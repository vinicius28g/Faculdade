# time-> sleep
import time
variavel = 'ola'
while(True):
    print('informe uma alternativa')
    print(' 1- normal \n 2- avançado\n 3- sair')
    variavel= int(input())
    print('trolei n era nd, mas se quiser esperar pra ter certeza')
    time.sleep(3)
    if variavel==1:
        print('vc é a coisinha mais linda desse mundo. te amo\n\n\n\n\n\n\n\n')
    elif variavel==2:
        print('não tem nd no mundo melhor que vc, vc é a melhor coisas de todos os tempo te am meu amor. muito, muito, e muito\n\n\n\n\n\n\n\n')
    elif variavel ==3:
        exit()

