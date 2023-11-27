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

    struct time {
        int h;
        int m;
        int s;
    };

    struct vel {
        int si;
        int sf;
        int ti;
        int tf;
        float v;
    };
    
    struct time h_01;
    struct time h_02;
    struct time tf;
    struct time ti;
    struct time tv;

    h_01.h = 05;
    h_01.m = 56;
    h_01.s = 14;

    h_02.h = 06;
    h_02.m = 03;
    h_02.s = 45;

    printf("\n%i:%i:%i\n", h_01.h, h_01.m, h_01.s);
    printf("\n%i:%i:%i\n", h_02.h, h_02.m, h_02.s);

    tf.h = 8; tf.m = 03; tf.s = 48; 
    ti.h = 8; ti.m=03; ti.s=48;

    tv.h =tf.h-ti.h; 
    tv.m=tf.m-ti.m; 
    tv.s=tf.s-ti.s; 


    printf("\n - Time Final   : %i:%i:%i\n", tf.h, tf.m, tf.s);
    printf("\n - Time Inicial : %i:%i:%i\n", ti.h, ti.m, ti.s);
    printf("\n - Time Variati : %i:%i:%i\n", tv.h, tv.m, tv.s);
    struct vel V;
    V.sf = 10;
    V.si = 5;
    V.tf = 8;
    V.ti = 5;
    V.v = (V.sf-V.si)/(V.tf-V.ti);
    printf("\n - Velox   : %f\n", V.v);

    system("pause");
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