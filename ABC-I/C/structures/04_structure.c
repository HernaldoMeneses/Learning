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
    //Global
    struct time {
        int h; int m; int s;
    };

int main(void) {

   struct time f[3] = { //Vector; type sctruct time ; 3 positions ; defined
        {6,17,25},
        {3,8,12},
        {2,4,6}
    };

    struct time f2[3];

    void sca(struct time x[]);
    void sms(struct time x[]);

    sca(f2);
    sms(f2);
    printf("\n - Just ...");
    sms(f);

    system("pause");
return 0;
}

void sca(struct time x[]){
    int i;
    for (i=0; i<3; i++){
        printf("Please, input time %i type(hh:mm:ss): ", i+1);
        scanf("%i:%i:%i", 
            &x[i].h, &x[i].m, &x[i].s);
    } 
};

void sms(struct time x[]){
    int i;
    for (i=0; i<3; i++){
        printf("\n %i - Time : %i:%i:%i\n", 
            i, x[i].h, x[i].m, x[i].s);
    } 
};

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