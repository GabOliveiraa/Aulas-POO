#include <iostream>

using namespace std;

// =================================
// Variáveis globais
// =================================

enum class EstadoJogo{
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

// =================================
// Protótipos das funções
// =================================

void mostrarEstado(EstadoJogo estado);

// =================================
// Função principal
// =================================

int main(){

    cout << "\n* Exemplo de Enumeracao\n\n";

    //Declara o enumerador, indicando que o jogo está no "menu principal"
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    // Mostra o estado do jogo
    mostrarEstado(estadoAtual);

    // Simula o inicio do jogo
    estadoAtual = EstadoJogo::Jogando;

    // Mostra o estado do jogo
    mostrarEstado(estadoAtual);

    // Simula o jogo pausado
    estadoAtual = EstadoJogo::Pausado;

    // Mostra o estado do jogo
    mostrarEstado(estadoAtual);

    // Simula o gameover
    estadoAtual = EstadoJogo::GameOver;

    // Mostra o estado do jogo
    mostrarEstado(estadoAtual);

    cout << endl;

    return 0;
}

// =================================
// Definição das funções
// =================================

void mostrarEstado(EstadoJogo estado){
    switch(estado){
        //Menu principal
        case EstadoJogo::MenuPrincipal:
            cout << ">> Voce esta no Menu Principal." << endl;
            break;
        
        // Gameplay
        case EstadoJogo::Jogando:
            cout << ">> O jogo esta em andamento..." << endl;
            break;
        
        // Pausa
        case EstadoJogo::Pausado:
            cout << ">> O jogo esta pausado..." << endl;
            break;
        
        // GameOver
        case EstadoJogo::GameOver:
            cout << ">> Game Over!" << endl;
            break;
        
        // Default
        default:
            cout << ">> Estado desconhecido.\n";
    }
}