#include <iostream>

using namespace std;

void cantar(int);
void dancar(int);
void enrolar(int);

int main(){

    void (*funcoes[3])(int) = {
        cantar, 
        dancar, 
        enrolar
    };

    int opcao;

    cout << "Digite uma opcao (0, 1 ou 2): ";
    cin >> opcao;
    cin.ignore(80, '\n');

    while((opcao >= 0) && (opcao < 3)){
        (*funcoes[opcao])(opcao);
        
        cout << "Digite uma opcao (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cin.ignore(80, '\n');
    }

    return 0;
}

// função cantar()
void cantar(int opcao){
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos cantar!\n" << endl;
}

// função dancar()
void dancar(int opcao){
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos dancar!\n" << endl;
}

// função enrolar()
void enrolar(int opcao){
    cout << "* Voce escolheu a opcao " << opcao << ". Vamos enrolar!\n" << endl;
}