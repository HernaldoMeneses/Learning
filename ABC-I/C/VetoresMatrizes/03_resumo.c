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
    const int bimestresAnuais = 4;
    const int numAlunos=2;
    
    float notasAlunos[numAlunos][bimestresAnuais];
    float mediasAlunos[numAlunos];

    float media = 0;

    printf("Insira as 4 notas do aluno");

    // Imprimindo os valores da matriz
    //printf("\nImprime com o Ciclo For\n\n");
    int i,j;
    i=0;
    j=i;
    for (i = 0; i < numAlunos; i++) {
        printf("\nInsira as 4 notas do aluno %i: ", i+1);
        for (j = 0; j < bimestresAnuais; j++) {
            printf("\nnotas do %i° bimestre do aluno %i: ",j+1 , i+1);
            scanf("%f ", &notasAlunos[i][j]);
            media += notasAlunos[i][j];
        }
        mediasAlunos[i] = media/4;
        media = 0;
        printf("\n");
    }
    printf("\n");

    // Imprimindo os valores da matriz
    printf("\nNotas Digitadas\n\n");
    //int i,j;
    for (i = 0; i < numAlunos; i++) {
        printf("Notas do Aluno %i: ", i+1);
        for (j = 0; j < bimestresAnuais; j++) {
            printf("%f ", notasAlunos[i][j]);
        }
        printf("\nMedias aluno %i: %f ",i+1, mediasAlunos[i]);
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