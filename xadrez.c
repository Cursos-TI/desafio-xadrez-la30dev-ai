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


    //MOVIMENTAÇÃO DO BISPO, LAÇO WHILE
    int cur_bispo = 1;
    printf("\nBISPO MOVE\n\n");
    while (cur_bispo <= bispo_mov){
        if (cur_bispo %2 == 0){
            printf("CIMA\n");
        }
        else{
            printf("DIREITA\n");
        }
        
        cur_bispo++;
    }

    //MOVIMENTAÇÃO DA TORRE, LAÇO WHILE-DO
    printf("\nTORRE MOVE\n\n");
    int cur_torre = 1;
    do {
        printf("DIREITA\n");
        cur_torre++;
    }
    while(cur_torre <= torre_mov);

    //MOVIMENTAÇÃO DA RAINHA, LAÇO FOR
    printf("\nRAINHA MOVE\n\n");
    for (int i = 1; i <= rainha_mov; i++){
        printf("ESQUERDA\n");
    }

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
