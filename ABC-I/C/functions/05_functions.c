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
    void funcPrint(int x[3][3]);
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    funcPrint(matrix);

    system("pause");
return 0;}

void funcPrint(int x[3][3]){

    int i,j;
    for (i=0 ; i < 3; ++i){
        for (j=0; j<3; ++j){
            printf("%i ", x[i][j]);
        }
        printf("\n");
    }

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