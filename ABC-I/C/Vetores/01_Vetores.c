//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Vetores
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.
#include <stdio.h>
int main(void) {
    // Conjunto de objetos do mesmo tipo

    float nota[5];
    nota[0] = 8;
    nota[1] = 8.7;
    nota[2] = 9;
    nota[3] = 6.7;
    nota[4] = 3.2;

    float tot = 0;
    float med = 0;

    printf("%f  a 4° nota na position 3 do vetor\n", nota[3]);

    int i;
    for (i=0;i<5;i++){
        printf("%f\n", nota[i]);
    }
    while (i>-1) {
        if (nota[i]>=5){
            printf("%f - Aluno Aprovado \n", nota[i]);
            --i;
        } else {
            printf("%f - Aluno Reprovado \n", nota[i]);
            --i;
        }
    }

    int pos = 0;
    for (i=0; i<5; ++i){
        pos = i + 1;
        printf("%i - nota\n", pos);
        scanf("%f\n", &nota[i]);
        tot = tot + nota[i]; 
    }
    med = tot/(pos);
    printf(" - qt notas     %i \n", pos);
    printf(" - soma notas   %f \n", tot);
    printf(" - media notas  %f \n", med);

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