// 6. Escreva um programa para efetuar o cálculo da quantidade total de litros de combustível
// gasta em uma viagem. O usuário deverá fornecer os valores do tempo gasto na viagem, da
// velocidade média que foi utilizada e da quantidade de quilômetros que o automóvel faz com
// um litro de combústivel. Para obter a distância percorrida, utilize a fórmula DISTANCIA =
// TEMPO × VELOCIDADE. A quantidade de litros de combustível gasta na viagem pode
// ser obtida pela fórmula DISTANCIA/QUANTIDADE_KILOMETROS_LITRO. O programa
// deve apresentar os valores da velocidade média, do tempo gasto na viagem, da distância total
// que foi percorrida e da quantidade de litros de combustível que foi utilizada na viagem. Para
// apresentar o resultado, considere a utilização de duas casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

    double DISTANCIA, QUANTIDADE_KILOMETROS_LITRO, LITROS_GASTOS;
    double TEMPO, VELOCIDADE;

    cout << setprecision(2) << fixed;

    cout << "Insira o tempo gasto em horas: ";
    cin >> TEMPO;

    cout << "Insira a velocidade média em km/h: ";
    cin >> VELOCIDADE;

    cout << "Insira a quantidade de km/l: ";
    cin >> QUANTIDADE_KILOMETROS_LITRO;

    DISTANCIA = TEMPO * VELOCIDADE;

    LITROS_GASTOS = DISTANCIA/QUANTIDADE_KILOMETROS_LITRO; 
    
    cout << "\n>> Velocidade média: " << VELOCIDADE << " km/h." << endl;
    cout << ">> Tempo gasto: " << TEMPO << " horas." << endl;
    cout << ">> Distância: " << DISTANCIA << " km." <<endl;
    cout << ">> Litros gastos: " << LITROS_GASTOS << " litros." << endl;

    return 0;
}