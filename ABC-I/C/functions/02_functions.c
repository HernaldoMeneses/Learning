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

int main(void) {

    float a, b, sum;
    float sumDigits(float num1, float num2);

    printf("Digite 2 numeros: ");
    scanf("%f", &a);
    scanf("%f", &b);

    sum = sumDigits(a,b);
    printf("A soma eh %f\n", sum);

    system("pause");
return 0;}

float sumDigits(float x, float y){
    float absolutvalue (float c);

    if (x < 0) {
        x = absolutvalue (x);
    }
    if (y < 0) {
        y = absolutvalue (y);
    }

    return x+y;
}

float absolutvalue (float vl){
    return vl * -1;
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