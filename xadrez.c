#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {


    //DECLARAÇÃO DE VARIÁVEIS (NÚMERO DE MOVIMENTAÇÕES MÁXIMAS DAS PEÇAS)
    int bispo_mov = 5;
    int torre_mov = 5;
    int rainha_mov = 5;
    int cavalo_mov = 1;

//FUNÇÃO RECURSIVA DE MOVIMENTAÇÃO DO BISPO 5 CASAS DIAGONAL DIREITA - CIMA
    void bispo_move(int b){
        if (b>0){
        for(int i = 0; i< 1; i++){
            for(int j = 0; j< 1; j++){
                printf("DIREITA\n");
            }
            printf("CIMA\n");
        }
        bispo_move(b-1);
    }
             }

//FUNÇÃO RECURSIVA DE MOVIMENTAÇÃO DA TORRE 5 CASAS PARA A DIREITA
    void torre_move(int t){
        if (t > 0){
            printf("DIREITA\n");
            torre_move(t-1);
        }
        }
        
    //FUNÇÃO RECURSIVA DE MOVIMENTAÇÃO DA RAINHA 8 CASAS PARA A ESQUERDA
    void rainha_move(int r){
        if(r > 0){
          printf("ESQUERDA\n"); 
          rainha_move(r-1);
        }
    }

    //MOVIMENTAÇÃO DO BISPO 5 CASAS DIAGONAL DIREITA - CIMA
    printf("\nBISPO MOVE\n\n");
    bispo_move(bispo_mov);


//MOVIMENTAÇÃO DA TORRE 5 CASAS PARA A DIREITA
    printf("\nTORRE MOVE\n\n");
    torre_move(torre_mov);

    //MOVIMENTAÇÃO DA RAINHA 8 CASAS PARA A ESQUERDA
    printf("\nRAINHA MOVE\n\n");
    rainha_move(rainha_mov);

    //MOVIMENTAÇÃO DO CAVALO EM L (CIMA CIMA DIREITA)
    printf("\nCAVALO MOVE\n\n");
    for(int i = 0; i < cavalo_mov; i++){
        for (int j = 0; j < 2; j++){
            printf("CIMA\n");
        }
        printf("DIREITA\n");
    }

    printf("\n");
    return 0;

}
