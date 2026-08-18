#include <iostream>

using namespace std;

struct Lista{
    int* vet;
    int inicio;
    int fim;
};

int organizar(Lista lista) {
    int referencia = lista.vet[lista.fim];
    int i = lista.inicio - 1;

    for(int j = lista.inicio; j < lista.fim; j++){
        if(lista.vet[j] < referencia){
            i++;
            int aux = lista.vet[i];
            lista.vet[i] = lista.vet[j];
            lista.vet[j] = aux;
        }
    }

    int aux = lista.vet[i + 1];
    lista.vet[i + 1] = lista.vet[lista.fim];
    lista.vet[lista.fim] = aux;

    return i + 1;
}

void quickSort(Lista lista){
    if(lista.inicio < lista.fim){
        int posicaoMeio = organizar(lista);

        Lista esquerda = {lista.vet, lista.inicio, posicaoMeio - 1};
        quickSort(esquerda);

        Lista direita = {lista.vet, lista.inicio, posicaoMeio + 1};
        quickSort(direita);
    }
}

int main(){
    int dados[] = {7, 2, 1, 6, 8, 5};
    int tamanho = sizeof(dados)/sizeof(dados);

    Lista minhaLista = {dados, 0, tamanho - 1};

    quickSort(minhaLista);

    for(int i = 0; i < tamanho; i++){
        cout << dados[i] << " ";
    }
    cout << endl;

    return 0;
}

