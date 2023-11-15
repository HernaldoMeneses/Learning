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
    int num;
    printf("Digite o numero de 1 a 5\n");
    scanf("%i", &num);
    switch (num){
        case 1:
            printf("primeiro\n");
            break;
        case 2:
            printf("segundo\n");
            break;
        case 3:
            printf("terceiro\n");
            break;
        case 4:
            printf("quarto\n");
            break;
        case 5:
            printf("quinto\n");
            break;
    default:
        printf("opcao invalida");
        break;
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