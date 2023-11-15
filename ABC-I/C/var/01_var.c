//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem R e O RStudio
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Variáveis
//# -             Criação
//# -             Atribuição
//# -             R Case Sensitive
//# -             Strings
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.

//########### - Parte I - inclusao das bibliotecas.
#include <stdio.h>

//#main function
/*
Longs Coments
*/
int main() {
    /*
    *
    *
    * 
    * */
    printf("Hello.\n");
    
    //declare x var
    int x;
    int another_var;
    char letter0 = 'a'; char letter1 = 'b'; char letter2 = 'c';
    printf("-   %c\n-   %c\n-   %c\n", letter0, letter1, letter2);
 
    another_var = 30;
    x = another_var;
    printf("value var  %i .\n", x);

    float sf,si, sv; float tf,ti, tv; float vm;
    si=-5; sf=10; tf=8; ti=3;

    printf("Value + Enter:/n");
    printf("endSpace:/n");
    scanf("%i", &sf);
    printf("initSpace:/n");
    scanf("%i", &si);
    printf("endTime:/n");
    scanf("%i", &tf);
    printf("initSpace:/n");
    scanf("%i", &ti);

    sv = sf-si; tv = tf-ti; 
    vm = sv/tv;

    printf("A variavel tem valor  %f .\n", sv);
    printf("endSpace  %f m - initSpace %f m varSpace %f m .\n", sf,si,sv);
    printf("endTime  %f s - initTime %f s varTime %f s .\n", tf,ti,tv);
    printf("speedMed  %f m/s .\n", vm);


    return 0;
}


//########### --------------------------------------------------------------------Reloaded.


//########### - Compile_By.
//#
//# - SO:  Windows 10 Pro.22H2
//# - IDE: RStudio.2023.09.0
//# - Obs: no bugs.
//# - Obs: 01/10/2023.
//#
//# - Hello... please if you find something wrong,  contact-me.
//########### --------------------------------------------------------------------Follow the white rabbit.