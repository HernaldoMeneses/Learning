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

    struct hour {
        int h;
        int m;
        int s;
    };
    
    struct hour h_01;
    struct hour h_02;

    h_01.h = 05;
    h_01.m = 56;
    h_01.s = 14;

    h_02.h = 06;
    h_02.m = 03;
    h_02.s = 45;

    printf("\n%i:%i:%i\n", h_01.h, h_01.m, h_01.s);
    printf("\n%i:%i:%i\n", h_02.h, h_02.m, h_02.s);

    system("pause");
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