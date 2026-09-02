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
    string cidade;
    Pokemon pokemon1;
    Pokemon pokemon2;
    Pokemon pokemon3;

};

int main(){
    cout << "\nExemplo pokemon\n" << endl;

    Treinador treinador;
    treinador.nome = "Ash Ketchum";
    treinador.cidade = "Pallet Town";

    cout << ">> Dados do treinador\n" << endl;
    cout << "Nome: " << treinador.nome << endl;
    cout << "Cidade: " << treinador.cidade << endl;
    cout << endl;

    cout << ">> Pokemons do Treinador\n" << endl;

    treinador.pokemon1.nome = "Pikachu";
    treinador.pokemon1.tipo = "Eletrico";
    treinador.pokemon1.nivel = 40;
    treinador.pokemon1.hp = 85;

    cout << "Nome: " << treinador.pokemon1.nome << endl;
    cout << "Tipo: " << treinador.pokemon1.tipo << endl;
    cout << "Nivel: " << treinador.pokemon1.nivel << endl;
    cout << "HP: " << treinador.pokemon1.hp << endl;

    cout << endl;

    treinador.pokemon2.nome = "Greninja";
    treinador.pokemon2.tipo = "Agua / Sombrio";
    treinador.pokemon2.nivel = 35;
    treinador.pokemon2.hp = 60;

    cout << "Nome: " << treinador.pokemon2.nome << endl;
    cout << "Tipo: " << treinador.pokemon2.tipo << endl;
    cout << "Nivel: " << treinador.pokemon2.nivel << endl;
    cout << "HP: " << treinador.pokemon2.hp << endl;

    cout << endl;

    treinador.pokemon3.nome = "Hawlucha";
    treinador.pokemon3.tipo = "Lutador / Voador";
    treinador.pokemon3.nivel = 32;
    treinador.pokemon3.hp = 55;

    cout << "Nome: " << treinador.pokemon3.nome << endl;
    cout << "Tipo: " << treinador.pokemon3.tipo << endl;
    cout << "Nivel: " << treinador.pokemon3.nivel << endl;
    cout << "HP: " << treinador.pokemon3.hp << endl;

    return 0;
}