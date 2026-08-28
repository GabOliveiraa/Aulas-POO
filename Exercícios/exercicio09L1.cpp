// 9. Escreva um programa para calcular e apresentar o valor do peso de uma esfera. O valor do
// peso pode ser obtido pela fórmula P = D × 4 × 3.141516 × R × R × R/3, onde P representa
// o valor do peso, D representa o valor da densidade e R representa o valor do raio. O usuário
// deverá fornecer os valores da densidade e do raio. Para apresentar o resultado, considere a
// utilização de duas casas decimais.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

constexpr double PI = 3.141516;

double valorDoPeso(){
    double D, R, P;

    cout << "Insira a Dencidade: "; cin >> D;
    cout << "Insira o Raio: "; cin >> R;

    P = (D * 4 * PI * pow(R, 3)) / 3.0;

    return P;
}

int main(void){

    double peso = valorDoPeso();

    cout << setprecision(2) << fixed;

    cout << "Valor do peso da esfera é: " << peso << endl;

    return 0;
}