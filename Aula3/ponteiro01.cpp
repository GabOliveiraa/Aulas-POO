#include <iostream>

using namespace std;

int main(){
    int idade = 25;
    int* idadePtr = &idade;
    int* nomePtr = nullptr;

    cout << "1. valor de <idade>: " << idade << "\n";
    cout << "1. Endereco de <idade>: " << &idade << "\n\n";
    cout << "2. valor de <idadePtr>: " << idadePtr << "\n";
    cout << "2. valor apontado por <*idadePtr>: " << *idadePtr << "\n\n";

    return 0;
}