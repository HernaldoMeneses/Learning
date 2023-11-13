//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Vetores
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.
#include <stdio.h>
int main(void) {
    // Um vetor multdimensional
    int vetor[3];
    //int matriz[3][3];
    int matrizn[3][3][2];

    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    // Imprimindo os valores da matriz
    printf("\nImprime\n\n");

    printf("O Elemento 0,0 da Matriz é:    %i\n", matriz[0][0]);
    printf("O Elemento 0,1 da Matriz é:    %i\n", matriz[0][1]);
    printf("O Elemento 0,2 da Matriz é:    %i\n", matriz[0][2]);
    printf("O Elemento 1,0 da Matriz é:    %i\n", matriz[1][0]);
    printf("O Elemento 1,1 da Matriz é:    %i\n", matriz[1][1]);
    printf("O Elemento 1,2 da Matriz é:    %i\n", matriz[1][2]);
    printf("O Elemento 1,0 da Matriz é:    %i\n", matriz[2][0]);
    printf("O Elemento 1,1 da Matriz é:    %i\n", matriz[2][1]);
    printf("O Elemento 1,2 da Matriz é:    %i\n", matriz[2][2]);

    // Imprimindo os valores da matriz
    printf("\nImprime com o Ciclo For\n\n");
    int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
return 0;}
//########### --------------------------------------------------------------------Reloaded.
//########### - Compile_By.
//#
//# - SO:  Windows 10 Pro.22H2
//# - IDE: gcc
//# - Obs: just ggc script.name on prompt
//# - Obs: 06/11/2023
//#
//# - Hello... please if you find something wrong,  contact-me.
//########### --------------------------------------------------------------------Follow the white rabbit.