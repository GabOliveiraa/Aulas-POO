#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Total de nomes
#define TAM 3

// Prototipos de funcao
void trocar(string& a, string& b);
int particao(string dados[], int inicio, int fim);
void quickSort(string dados[], int inicio, int fim);

int main()
{
    cout << "\nExemplo: Quick Sort" << endl;
    cout << endl;

    int i;

    // Array para armazenar os nomes
    string nomes[TAM];

    // Entrada dos nomes
    for (i = 0; i < TAM; i++)
    {
        cout << "Informe o nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    cout << endl;

    // Mostra os nomes antes da ordenacao
    cout << "Nomes antes da ordenacao:" << endl;
    cout << endl;

    i = 1;

    for (const auto& nome : nomes)
    {
        cout << setw(2) << i << ". " << nome << endl;
        i++;
    }

    cout << endl;

    // Ordenacao usando Quick Sort
    quickSort(nomes, 0, TAM - 1);

    // Mostra os nomes depois da ordenacao
    cout << "Nomes depois da ordenacao:" << endl;
    cout << endl;

    i = 1;

    for (const auto& nome : nomes)
    {
        cout << setw(2) << i << ". " << nome << endl;
        i++;
    }

    cout << endl;

    return 0;
}

// Funcao para trocar duas strings
void trocar(string& a, string& b)
{
    string aux = a;
    a = b;
    b = aux;
}

// Funcao de particao
int particao(string dados[], int inicio, int fim)
{
    string pivo = dados[fim];

    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        if (dados[j] < pivo)
        {
            i++;
            trocar(dados[i], dados[j]);
        }
    }

    trocar(dados[i + 1], dados[fim]);

    return i + 1;
}

// Quick Sort
void quickSort(string dados[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int pivo = particao(dados, inicio, fim);

        quickSort(dados, inicio, pivo - 1);
        quickSort(dados, pivo + 1, fim);
    }
}
