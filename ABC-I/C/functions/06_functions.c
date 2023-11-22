//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Recursive Functions
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.
#include <stdio.h>

int main(void) {
    void funcPrint(int x,  int vetor[]);
    int matrix[3] = {10};
    int x = 10;

    funcPrint(x, matrix);
    printf("\n x = %i \n vetor[1] = %i \n", x, matrix[1]);
    printf("\n Var to function pass by copy \n");
    printf("\n Vetor to function do not cop copy (position)\n");

    system("pause");
return 0;}

void funcPrint(int x, int vetor[]){

    x = x + 10;
    vetor[1] = 20;

    printf("\n x = %i \n vetor[1] = %i \n", x, vetor[1]);
}



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