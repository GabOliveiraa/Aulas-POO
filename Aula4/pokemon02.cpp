#include <iostream>
#include <string>

using namespace std;

// definição da estrutura Pokemon
struct Pokemon{
    string nome;
    string tipo;
    int nivel;
    int hp;

    // Método para aumentar os pontos de hp do Pokemon
    void aumentarHP(int pontos){
        hp += pontos;
    }
};

struct Treinador{
    string nome;
    int hp;

};

int main(){
    cout << "\nExemplo pokemon\n" << endl;

    // Aloca memória dinamicamente para uma estrutura do tipo Pokemon
    Pokemon* ptrPokemon = new Pokemon;

    // Atribui valores utilizando o ponteiro
    ptrPokemon->nome = "Charmander";
    ptrPokemon->tipo = "Fogo";
    ptrPokemon->nivel = 1;
    ptrPokemon->hp = 100;

    // Acessa os valores utilizando o ponteiro
    cout << ">> Dados do Pokemon\n" << endl;
    cout << "Nome: " << ptrPokemon->nome << "\n";
    cout << "Tipo: " << ptrPokemon->tipo << "\n";
    cout << "Nivel: " << ptrPokemon->nivel << "\n";
    cout << "HP: " << ptrPokemon->hp << "\n" << endl;

    cout << ">> Um pokemon selvagem apareceu...\n" << endl;
    cout << "Seu Charmander venceu uma luta muito dificil...";
    cout << "Ele ganhou 50 pontos!\n";

    // Aumenta o HP do Pokemon
    ptrPokemon->aumentarHP(50);

    cout << "Olhe, o que esta acontecendo? Seu Charmander esta brilhando!\n";

    ptrPokemon->nivel++;

    cout << "O Charmander subiu de nivel\n\n";

    // Acessa os valores utilizando o ponteiro
    cout << ">> Dados do Pokemon\n" << endl;
    cout << "Nome: " << ptrPokemon->nome << "\n";
    cout << "Tipo: " << ptrPokemon->tipo << "\n";
    cout << "Nivel: " << ptrPokemon->nivel << "\n";
    cout << "HP: " << ptrPokemon->hp << "\n" << endl;

    // Libera a memória utilizada pela estrutura
    delete ptrPokemon;

    return 0;
}