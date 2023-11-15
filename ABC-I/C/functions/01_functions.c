//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         funções
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.
#include <stdio.h>

float visibleForAll = 3.14;

int main(void) {
    //declaration
    void msg();

    //exc
    msg();


    float calcArea(float a);
    float area5 = calcArea(5);
    float area6 = calcArea(6);
    float area7 = calcArea(7);
    printf("\nGlobalVAr: %f\n", visibleForAll);
    
return 0;}

//Buld in
void msg(void) {
    printf("\nIt's Working!\n");
}

float calcArea(float x){
    printf("\nArealValue\n");
    // variavel static (cumulativa)
    static int contRun = 0;
    contRun = contRun+1;
    //variavel local automatica
    float a = x*x;

    printf("\nArea: %f\n", a);
    printf("\nRunTimes: %i\n", contRun);
    printf("\nGlobalVAr: %f\n", visibleForAll);

    return a;
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