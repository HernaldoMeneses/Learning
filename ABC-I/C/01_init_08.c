//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Ciclo do while
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.

//########### - Parte I - inclusao das bibliotecas.
#include <stdio.h>
int main() {
    int idade;
    printf("Informe a idade:\n");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Bebidas alcólicas proibidas! \n");
    } else {
        printf("Bebidas alcólicas liberada! \n");
    }
    //dif
    if (idade <= 5) {
        printf("Bebês humanos! \n");
    } else if (idade > 5 && idade <= 10 ){
        printf("Criança! \n");
    } else if (idade > 10 && idade <= 18 ){
        printf("Adolescente! \n");
    } else if (idade > 18 && idade <= 50 ){
        printf("Adulto! \n");
    } else {
        printf("Idoso \n");
    }

    return 0;
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