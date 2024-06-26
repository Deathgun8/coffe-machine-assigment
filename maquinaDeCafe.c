/*TRABALHO 1
PROBLEMA: maquina de café
GRUPO: Arthur Aguiar, Arthur Neves, Joao pedro porfilio, Joao Marcos, Rafael erram
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    //Declarações das variáveis
    int i, A1, A2, A3, tempo1, tempo2, tempo3, posicao, minTempo;

    //Etapa de verificação dos dados inseridos pelo usuário
        do
        {
        printf("Quantas pessoas trabalham no 1 no 2 e no 3 andar? \n");
        scanf("%d %d %d", &A1, &A2, &A3);

        if(A1 < 0  || A1 > 1000 || A2 < 0  || A2 > 1000 || A3 < 0  || A3 > 1000)
        {
            printf("Numero invalido, porfavor digite um numero maior que 0 e menor que 1000 \n");
        }  

        }while (A1 < 0  || A1 > 1000 || A2 < 0 || A2 > 1000 || A3 < 0  || A3 > 1000);

    //Calcula o tempo total que as pessoas demorariam para chegar ate a máquina em todos os possíveis andares
        tempo1 = A1 * 0 + A2 * 2 + A3 * 4;
        tempo2 = A1 * 2 + A2 * 0 + A3 * 2;  
        tempo3 = A1 * 4 + A2 * 2 + A3 * 0; 

    //definições das variáveis para comparação posterior
        posicao = 1;
        minTempo = tempo1;

    //comparação entre o tempo mínimo pré definido com o tempo1 para saber qual tempo é o menor
        if(tempo2 < minTempo)
        {
            minTempo = tempo2;
        } 
        if (tempo3 < minTempo)
        {
            minTempo = tempo3;
        }
    
    //Mostra ao usuário o tempo mínimo que os funcioários vão gastar indo até a máquina de café
        printf("Tempo: %d \n", minTempo);

    //Verifica se há mais de uma posição para a máquina onde os tempos minimos serão iguais
        if (minTempo == tempo1)
        {
            posicao = 1;
            printf("Maquina localizada no(s) andar(es) %d", posicao);

            if(minTempo == tempo2)
            {
                posicao = 2;
                printf(" ou %d", posicao);
            } 
            if (minTempo == tempo3)
            {
                posicao = 3;
                printf(" ou %d", posicao);
            }
        } else if (minTempo == tempo2)
        {
            posicao = 2;
            printf("Maquina localizada no(s) andar(es) %d", posicao);

            if (minTempo == tempo3)
            {
                posicao = 3;
                printf(" ou %d", posicao);
            }
        } else if (minTempo == tempo3)
        {
            posicao = 3;
            printf("Maquina localizada no(s) andar(es) %d", posicao);
        }
}