#include <iostream>

using namespace std;



int main(int argc, char* argv[]){

    cout << "Exemplo de Argumentos da Funcao Principal\n" << endl;

    // Exibe o número de argumentos passados para a função
    cout << "Numero de argumentos: " << argc << "\n" << endl;

    //Loop para exibir os argumentos passados para a função
    for(int i = 0; i < argc; i++){
        cout << "Argumento " << i << ": " << argv[i] << "\n";
    }

    return 0;
}