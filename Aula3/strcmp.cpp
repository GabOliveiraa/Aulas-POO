#include <iostream>
#include <cstring>

using namespace std;

int main(){
    cout << "\nExemplo de uso da função strcmp()\n" << endl;

    // declara um array de caracteres usando ponteiros
    const char *nomes[] = {
        "Paulo",
        "Gabriel",
        "Bruno",
        "Maria",
        "Beatriz",
        "Pedro"
    };

    // Obtém o total de nomees armazenados no array
    size_t total = sizeof(nomes) / sizeof(nomes[0]);

    // Variávil temporária
    const char *temp;

    int i, j;

    cout << "- Total de nomes: " << total << "\n" << endl;

    // Exibe os nomes antes de ordenar
    cout << "Antes da ordenacao: \n" << endl;

    for(i = 0; i < total; i++){
        cout << i + 1 << ". " << nomes[i] << endl;
    }

    // Realiza a ordenação (A-Z) dos nomes, usando strcmp()
    for(i = 0; i < total - 1; i++){
        for(j = i + 1; j < total; j++){
            if(strcmp(nomes[i], nomes[j]) > 0){
                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }

    // Exibe os nomes depois de ordenar
    cout << endl;
    cout << "Depois da ordenacao: \n" << endl;

    for(i = 0; i < total; i++){
        cout << i + 1 << ". " << nomes[i] << endl;
    }

    cout << "\n";

    return 0;
}