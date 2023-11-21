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
    int vetor[10] = {6,4,1,9,8,0,5,7,3,2};
    int i=10;

    void ordemCrescente(int vetor[], int n);

    ordemCrescente(vetor, i);
    for (i=0 ; i < 10; ++i){
        printf("%i ", vetor[i]);
    }
    
    system("pause");
return 0;}

void ordemCrescente(int vetor[], int n){
    int i, j, temp;
    for (i=0; i < n; ++i) {
        for (j=i+1; j<n; ++j) {
            if (vetor[i]>vetor[j]){
                temp = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temp;
            }
        }
    }
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