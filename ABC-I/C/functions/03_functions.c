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
    int options = 1;
    while (options != 0) {
        printf("Digite: \n 1 para calcular \n 0 para finalizar: \n");
        scanf("%i", &options);
        if (options == 1){
            submain();
        }
    }

    system("pause");
return 0;}

int submain(void) {
    int num, result;
    printf("Digite o numero para o fatorial: \n");
    scanf("%i", &num);
    int fat(int n);
    result = fat(num);
    printf("Fatorial de %i = %i\n", num, result);
}


int fat(int x){
    int result;
    if (x == 0){
        result = 1;
    } else {
        result = x*fat(x-1);
    }
    return result;
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