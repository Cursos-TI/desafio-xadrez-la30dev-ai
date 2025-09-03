#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {


    //DECLARAÇÃO DE VARIÁVEIS (NÚMERO DE MOVIMENTAÇÕES MÁXIMAS DAS PEÇAS)
    int bispo_mov = 6;
    int torre_mov = 5;
    int rainha_mov = 1;
    int cavalo_mov = 3;




    void bispo_move(int b){
        if (b > 0){
            if (b %2 == 0){
            printf("CIMA\n");
        }
        else{
            printf("DIREITA\n");
        }
            bispo_move(b-1);
        }
    }


    void torre_move(int t){
        if (t > 0){
            printf("CIMA\n");
        }
        torre_mov(t-1);
        }
        
    void rainha_move(int r){
        if(r > 0){
          printf("ESQUERDA\n")  
        }
    }

    //MOVIMENTAÇÃO DO BISPO 5 CASAS DIAGONAL DIREITA - CIMA
    printf("\nBISPO MOVE\n\n");
    bispo_move(10);

    //MOVIMENTAÇÃO DA RAINHA 8 CASAS PARA A ESQUERDA
    printf("\nRAINHA MOVE\n\n");
    rainha_move(8);

//MOVIMENTAÇÃO DO CAVALO, LOOP ANINHADO
    printf("\nCAVALO MOVE\n\n");
    int cur_cavalo = 1;

    while(cur_cavalo <= torre_mov){
        for(int i = 1; i<=2;i++){
            printf("BAIXO\n");}
        cur_cavalo++;
        printf("ESQUERDA\n");
    };

    printf("\n");
    return 0;
}
