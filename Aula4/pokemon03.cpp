#include <iostream>
#include <vector>
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
    string cidade;
    vector<Pokemon*> pokemons;

};

int main(){
    cout << "\nExemplo de aninhamento de estruturas\n" << endl;

    Treinador* treinador = new Treinador;
    treinador->nome = "Ash Ketchum";
    treinador->cidade = "Pallet Town";

    cout << ">> Pokemons do Treinador\n" << endl;

    Pokemon* pikachu = new Pokemon;

    pikachu->nome = "Pikachu";
    pikachu->tipo = "Eletrico";
    pikachu->nivel = 40;
    pikachu->hp = 85;

    cout << endl;

    Pokemon* greninja = new Pokemon;

    greninja->nome = "Greninja";
    greninja->tipo = "Agua / Sombrio";
    greninja->nivel = 35;
    greninja->hp = 60;

    cout << endl;

    Pokemon* hawlucha = new Pokemon;

    hawlucha->nome = "Hawlucha";
    hawlucha->tipo = "Lutador / Voador";
    hawlucha->nivel = 32;
    hawlucha->hp = 55;

    treinador->pokemons.push_back(pikachu);
    treinador->pokemons.push_back(greninja);
    treinador->pokemons.push_back(hawlucha);

    cout << ">> Dados do treinador\n" << endl;
    cout << "Nome: " << treinador->nome << endl;
    cout << "Cidade: " << treinador->cidade << endl;
    cout << endl;

    cout << ">> Pokemons do Treinador\n" << endl;

    for(Pokemon* pokemon : treinador->pokemons){
        cout << "Nome: " << pokemon->nome << "\n";
        cout << "Tipo: " << pokemon->tipo << "\n";
        cout << "Nivel: " << pokemon->nivel << "\n";
        cout << "HP: " << pokemon->hp << "\n" << endl;
    }

    for (Pokemon* pokemon : treinador->pokemons){
        delete pokemon;
    }

    delete treinador;

    return 0;
}