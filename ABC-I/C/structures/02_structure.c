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

    struct time {
        int h;
        int m;
        int s;
    };

int main(void) {
    //returnFunction function(parameters)
    struct time vartime(struct time x, struct time y);
    struct time vartimes(struct time x);
    
    struct time tf;
    struct time ti;
    struct time tv;
    struct time tvseconds;

    ti.h = 05;
    ti.m = 10;
    ti.s = 14;

    tf.h = 06;
    tf.m = 15;
    tf.s = 45;

    tv = vartime(tf,ti);
    printf("\n - Time Variati : %i:%i:%i\n", tv.h, tv.m, tv.s);
    tvseconds = vartimes(tv);
    printf("\n - Time Variati seconds : %i:%i:%i\n", tvseconds.h, tvseconds.m, tvseconds.s);

    system("pause");
return 0;}

struct time vartime(struct time x, struct time y){

    printf("\n - Time Final : %i:%i:%i\n", x.h, x.m, x.s);
    printf("\n - Time Init  : %i:%i:%i\n", y.h, y.m, y.s);
    struct time tv;
    tv.h = x.h-y.h;
    tv.m = x.m-y.m;
    tv.s = x.s-y.s;
    return tv;
}

struct time vartimes(struct time x){
    struct time tvs;
    tvs.h = 0;
    tvs.m = 0;
    tvs.s = x.h*60 + x.m*60 + x.s;
    return tvs;
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