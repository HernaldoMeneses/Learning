//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         switch
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.
#include <stdio.h>
int main() {
    int num, den;
    printf("Digite o Numerador e Denominador e tecle Enter para dividir\n");
    scanf("%i %i", &num, &den);
    if (den == 0){
        printf("divisao por zero | indefinicao matematica.\n");
    } else {
        if (num % den == 0){
            printf("%i e divisivel por %i.\n", num, den);    
        } else {
            printf("%i nao e divisivel por %i.\n", num, den);
        }
    }
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