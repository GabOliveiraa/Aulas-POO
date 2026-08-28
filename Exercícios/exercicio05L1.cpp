// 5. Escreva um programa para ler os valores de uma temperatura em graus Celsius e apresentá-la
// convertida para graus Fahrenheit e graus Kelvin. A fórmula de conversão para graus Fahrenheit
// é dada por F = (9 × C + 160)/5. A fórmula de conversão para graus Kelvin é dada por
// K = C + 273, 15. Nessas fórmulas, F corresponde à temperatura em graus Fahrenheit, K
// corresponde à temperatura em graus Kelvin e C corresponde à temperatura em graus Celsius.
// Para apresentar o resultado, considere a utilização de duas casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

float Fahrenheit(float C){
    float F;

    F = (9 * C + 160) / 5;

    return F;
}

float Kelvin(float C){
    float K;

    K = C + 273.15;
    
    return K;
}

int main(void){
    float C;

    cout << setprecision(2) << fixed;

    cout << "Insira o valor em Celcius: "; 
    cin >> C;

    float fahrenheit = Fahrenheit(C);
    float kelvin = Kelvin(C);

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
}