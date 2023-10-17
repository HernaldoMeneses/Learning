//########### - Guia Inicial.
//#
//# - Objetivo: Primeiro contato com a linguagem C++ e p DEV C++
//# - Obs     : Sem Exaurimento.
//# -     * Topicos Abordados
//# -         Variáveis
//# -             Criação
//# -             Atribuição
//# -             C++ Case Sensitive
//# -             Strings
//#
//# - Infrastrutura de compilação e informações ao final do Script.
//########### --------------------------------------------------------------------Thanks.

//########### - Parte I - inclusao das bibliotecas.
#include <iostream>
    using namespace std;

//#main function
int main(){
	printf("Hello.\n");
    //Variables
    //TIPO NOME;
    //TIPO NOME = VALOR;

    //Declare and initialize
    int vidas=0; //10, 25
    char letra='A'; //'B'
    double Real=5.2; //3.143982341234341234
    float Real_=5.2; //3.14
    bool logic=true;  //TRUE or FALSE
    string nome=".\H.Meneses"; //"list of char"
    char vector[20]; //"20 position same type"

    //É interessante buscar exaurir leitura sobre type of variables

    //Showing with cout
    cout << vidas << "\n";
    cout << letra << "\n";
    cout << Real  << "\n";
    cout << Real_ << "\n";
    cout << logic << "\n";
    cout << nome  << "\n";

    //Another way
    cout << vidas << "\n" << letra << "\n";
    cout << Real  << "\n" << Real_ << "\n";
    cout << logic << "\n" << nome  << "\n";
    
    cout << "Digite o valor de vidas: ";
    cin >> vidas;
    cout << "Digite o valor seu nome: ";
    cin >> nome;
    cout << "Apresntando os valores modificados: ";
    cout << vidas << "\n" << nome << "\n";

    //mandando comando para o sistema.
    system("pause");

    return 0;
}


//########### --------------------------------------------------------------------Reloaded.


//########### - Compile_By.
//#
//# - SO:  Windows 10 Pro.22H2
//# - IDE: DEV C++ Version 5.11
//# - Obs: no bugs.
//# - Obs: 17/10/2023.
//#
//# - Hello... please if you find something wrong,  contact-me.
//########### --------------------------------------------------------------------Follow the white rabbit.
