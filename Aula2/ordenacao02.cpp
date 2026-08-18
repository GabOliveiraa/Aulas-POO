#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Total de nomes
#define TAM 3

// Protótipos de função
void trocar(string& a, string& b);
int particao(string dados[], int inicio, int fim);
void quickSort(string dados[], int inicio, int fim);


// Função principal
int main(){
    cout << "\nExemplo: Quick Sort" << endl;
    cout << endl;

    // variáveis controle da saída
    int i;

    //declara um array para armazenar os nomes
    string nomes[TAM];

    // Loop que realiza a entrada dos nomes
    for ( i = 0; i < TAM; i++){
        cout << "Informe o nome" << i + 1 << ": ";
        getline(cin, nomes[i]);
    }
    cout << "\n";

    // Ordenação
    // ordenação usando o quick sort
    quickSort(nomes, 0, TAM - 1);

    // saída

    //Imprime nomes depous da ordenação
    cout << "Nomes depois da ordenacao: " << endl;
    cout << endl;

    // contador para os nomes
    i = 1;

    //loop para imprimir nomes
    for(const auto& nome : nomes){
        cout << setw(2) << i << ". " << nome << endl;
        i++;
    }

    // ordenação
    cout << "Nomes antes da ordenacao: " << endl;
    cout << endl;

    // contador para os nomes
    i = 1;

    //loop para imprimir nomes
    for(const auto& nome : nomes){
        cout << setw(2) << i << ". " << nome << endl;
        i++;
    }

    cout << "\n";

    return 0;
}

// definição das funcões

// função para trocar o valor de duas strings
void trocar(string& a, string& b){
    string aux = a;
    a = b;
    b = aux;
}

// função de partição, que coloca o pivô no lugar correto e organiza os elementos menores
// que o pivô à esquerda e os maiores a direita

int particao(string dados[], int inicio, int fim) {
    string pivo = dados[fim];
    int i = inicio - 1;

    for(int j = inicio; j < fim; j++){
        if(dados[j] < pivo){
            i++;
            trocar(dados[i], dados[j]);
        }
    }

    trocar(dados[i + 1], dados[fim]);

    return i + 1;
}

//quicksort
void quickSort(string dados[], int inicio, int fim){
    if(inicio < fim) {
        int pivo = particao(dados, inicio, fim);

        quickSort(dados, inicio, pivo - 1);
        quickSort(dados, pivo + 1, fim);
    }
}