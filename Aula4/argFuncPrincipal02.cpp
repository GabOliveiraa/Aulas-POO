#include <iostream>
#include <string>

using namespace std;



int main(int argc, char* argv[]){

    cout << "Exemplo de Argumentos da Funcao Principal\n" << endl;

    // Se o usuário não forneceu o número correto de argumentos
    if (argc != 4){
        // Exibe uma mensagem de erro
        cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2" << endl;
        cout << endl;
        // Encerrar o programar
        return 1;
    }

    // Recupera o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Realiza a operação dos valores
    if(!strcmp(operacao, "somar")){
        cout << "Soma: " << num1 + num2 << endl;
    }else if(!strcmp(operacao, "subtrair")){
        cout << "Subtracao: " << num1 - num2 << endl;
    }else{
        cout << "Operacao invalida!" << endl;
    }

    cout << endl;

    return 0;
}