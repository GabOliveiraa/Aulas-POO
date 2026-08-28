// 7. Escreva um programa para ler os valores de uma temperatura em graus Fahrenheit e
// apresentá-la convertida para graus Kelvin. A fórmula de conversão de graus Fahrenheit para
// graus Kelvin é dada por K = (F − 32) × 5/9 + 273, 15. Nessa fórmula, F corresponde à
// temperatura em graus Fahrenheit e K corresponde à temperatura em graus Kelvin. Para
// apresentar o resultado, considere a utilização de duas casas decimais.
#include <iostream>
#include <iomanip>

using namespace std;

float Kelvin(float F){
    float K;

    K = (F - 32) * 5.0 / 9.0 + 273.15;
    
    return K;
}

int main(void){
    float F;

    cout << setprecision(2) << fixed;

    cout << "Insira o valor em Fahrenheit: "; 
    cin >> F;

    float kelvin = Kelvin(F);

    cout << "Kelvin: " << kelvin << endl;
}