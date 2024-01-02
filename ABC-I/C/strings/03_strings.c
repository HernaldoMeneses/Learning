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
    int max = 20; //need to declare
    int lengthString(char string[]);
    char UserName[max];

    printf("What's you frist name? \n");
    scanf("%s", UserName);// no space 
    printf("length name: %i \n", lengthString(UserName));

    system("pause");
return 0;
}

int lengthString(char string[]){
    int len = 0;
    while (string[len] != '\0'){
        len++;
    }
    return len;
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