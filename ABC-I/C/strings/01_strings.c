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

int stgleng(char x[]){
    int len = 0;
    while (x[len] != '\0'){
        len++;
    }
    return len;
}


void vector_show(char x[], int i_length) {
    int i;
    int i_length_f = i_length;
    for (i = 0; i< i_length_f; ++i) {
        printf("%c", x[i]);
    }
    printf("\n");
}

void fx (char x[]) {
    int i_length = 0;
    i_length = stgleng(x);
    void vector_show(char x[], int i_length);
    vector_show(x, i_length);
    return;
}

//Hi...
int main(void) {
    char var_string[] = {'A','B','.','Z'};
    char var_string_[] = "Matrix_Reloaded";

    void fx (char x[]);
    fx(var_string);
    fx(var_string_);

    void concat(char x[], int x1, char y[], int y1);
    int x_ = stgleng(var_string);
    int y_ = stgleng(var_string_);
    concat(var_string, x_, var_string_, y_);

    system("pause");
return 0;
}

void concat(char x[], int x1, char y[], int y1){
    int i,j,xx,yy;
    xx = x1;
    yy = y1;
    char var_string_c[xx+yy];
    for (i=0; i < xx; i++){
        var_string_c[i] = x[i];
    }
    for (j=0; j < yy; j++){
        var_string_c[xx+j] = y[j];
    }
    void fx (char x[]);
    fx(var_string_c);
}

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