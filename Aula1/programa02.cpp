// --------------------------------------------
// programa02.cpp
// Programa para calcular horas trabalhadas
// --------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

// -----------------------
// Função principal
// -----------------------
int main(){
    //Declaração de variáveis
    float ht, vh, pd, td, sd, sl;

    // Entrada dos dados
    cout << endl;
    cout << "Calculo de Horas Trabalhadas\n\n";
    cout << "Informe a quantidade de horas trabalhadas: ";
    cin >> ht;
    cout << "Informe o valor da hora de trabalho: ";
    cin >> vh;
    cout << "Informe o valor percentual de desconto: ";
    cin >> pd;

    // Realiza os cálculos

    sb = ht * vh;
    td = (pd / 100) * sb;
    sl = sb - td;

    // Formatação do resultado

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    // Saida dos dados

    cout << "\n";
    cout << "Salário Bruto:.." << sb << endl;


    // ------------
    return 0;
}

