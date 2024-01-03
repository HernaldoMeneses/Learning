//########### - Guia Inicial.
//# - Created By: H.Meneses__
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Strings
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### ------------------------------------------------------Thanks.
#include <stdio.h>

//Hi...
int main(void) {
    int idade;    

    printf("digite a idade.\n");
    scanf("%i", &idade);

    printf("With && -> E\n");
    if(idade >= 18 && idade <= 50) {
        printf("Adulto.\n");
    } else { 
        printf("fora da Faixa Estabelecida!\n");
        }
        
    printf("With II -> OU\n");
    if(idade >= 18 || idade <= 50) {
        printf("Adulto.\n");
    } else { 
        printf("fora da Faixa Estabelecida!\n");
        }

    printf("Faixa Estabelecida \n idade >= 18 && idade <= 50.\n");
    system("pause");
return 0;
}



//cont. aula 50 
//https://www.youtube.com/watch?v=BX6wPwvEMm8


//########### ----------------------------------------------------Reloaded.
//########### - Compile_By.
//#
//# - SO:  Windows 10 Pro.22H2
//# - IDE: gcc
//# - Obs: just ggc script.name on prompt
//# - Obs: 27/12/2023
//#
//# - Hello... please if you find something wrong,  contact-me.
//########### -----------------------------------------------------Follow the white rabbit.