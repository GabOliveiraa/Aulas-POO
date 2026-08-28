// 8. Escreva um programa para calcular e apresentar o valor do volume de uma lata de óleo. O
// valor do volume pode ser obtido pela fórmula V = 3.141516 × R × R × A, onde V corresponde
// ao valor do volume, R corresponde ao valor do raio e A correpsonde ao valor da altura. O
// usuário deverá fornecer os valores do raio e da altura. Para apresentar o resultado, considere a
// utilização de duas casas decimais.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

constexpr double PI = 3.141516;

double valorDoVolume(){

    double R;
    double A;
    double V;

    cout << "Insira o valor do Raio: "; cin >> R;
    cout << "Insira o valor da Altura: "; cin >> A;

    V = PI * pow(R, 2) * A;

    return V;
}

int main(void){

    double valorVolume = valorDoVolume();

    cout << setprecision(2) << fixed;

    cout << "Volume: " << valorVolume << endl;

    return 0;
}