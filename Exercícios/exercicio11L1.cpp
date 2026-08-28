// 11. Escreva um programa que peça 2 números inteiros e um número real. Calcule e mostre:
// a. O produto do dobro do primeiro com metade do segundo;
// b. A soma do triplo do primeiro com o terceiro;
// c. O terceiro elevado ao cubo.
#include <iostream>
#include <cmath>

using namespace std;

// O produto do dobro do primeiro com metade do segundo
double calcularA(int primeiro, int segundo){
    double rA;
    rA = (primeiro * 2) * (segundo / 2.0);

    return rA;
}

// A soma do triplo do primeiro com o terceiro
double calcularB(int primeiro, double terceiro){
    double rB;

    rB = (primeiro * 3) + terceiro;

    return rB;
}

// O terceiro elevado ao cubo
double calcularC(double terceiro){

    double rC;

    rC = pow(terceiro, 3);

    return rC;
}

int main(void){

    int primeiro;
    int segundo;
    double terceiro;

    cout << "Insira o primeiro valor: "; cin >> primeiro;
    cout << "Insira o segundo valor: "; cin >> segundo;
    cout << "Insira o terceiro valor: "; cin >> terceiro;


    double A = calcularA(primeiro, segundo);
    double B = calcularB(primeiro, terceiro);
    double C = calcularC(terceiro);

    cout << ">> A. " << A << endl;
    cout << ">> B. " << B << endl;
    cout << ">> C. " << C << endl;

    return 0;
}