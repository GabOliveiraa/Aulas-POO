#include <iostream>
#include <cstring>

using namespace std;

int main(){
    cout << "\nExemplo de uso de strtok()\n" << endl;

    char texto[] = "Minha-frase-de-token";
    char separador[] = "-";

    // Tamanho inicial do array de tokens
    int capacidade = 2;

    char **tokens = nullptr;

    // Inicialmente, aloca espaço para 2 tokens
    tokens = new char*[capacidade];

    //Ponteiro para o token
    char *tokenPtr;

    //Contadores
    int i, total;

    cout << "Texto inicial: " << texto << "\n" << endl;

    // Retorna o primeiro token
    tokenPtr = strtok(texto, separador);
    
    // Inicializa o contador de tokens
    total = 0;

    //Loop para obter os tokens até que o ponteiro tokebPtr seja NULL
    while(tokenPtr != NULL){
        if(total >= capacidade){
            capacidade *= 2;

            char **temp = new char*[capacidade];

            for(i = 0; i < total; i++){
                temp[i] = tokens[i];
            }
            // libera a memória antiga
            delete[] tokens;

            // aponta o array de tokens para o array temporário
            tokens = temp;
        }

        tokens[total] = tokenPtr;

        total++;

        // Obtem o proximo token
        tokenPtr = strtok(NULL, separador);
    }

    cout << "Foram gerados " << total << " tokens: \n" << endl;

    for(i = 0; i < total; i++){
        cout << i + 1 << ". -> " << tokens[i] << endl;
    }

    cout << endl;

    return 0;
}