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

int main(void) {
    int i_length = 0;
    char var_string[] = {'A','B','.','Z'};
    i_length = stgleng(var_string);
    void vector_show(char x[], int i_length);
    vector_show(var_string, i_length);
    system("pause");
return 0;}

void vector_show(char x[], int i_length) {
    int i;
    int i_length_f = i_length;
    for (i = 0; i< i_length_f; ++i) {
        printf("%c", x[i]);
    }
    printf("\n");}

int stgleng(char x[]){
    int len = 0;
    while (x[len] != '\0'){
        len++;
    }
    return len;}

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