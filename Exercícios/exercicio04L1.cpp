// 4. Escreva um programa que peça para o usuário informar quanto ele ganha por hora, o nome
// do mês e o número de horas que ele trabalhou nesse mês. Em seguida, o programa deve calcular
// e exibir o salário que ele deve receber no final mês. Para apresentar o resultado, considere a
// utilização de duas casas decimais.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    double vh, salario;
    int ht;
    string mes;

    cout << setprecision(2) << fixed << right;

    cout << "Informe o mês trabalhado: "; cin >> mes;
    cout << "Informe quanto você ganha por hora: "; cin >> vh;
    cout << "Informe quantas horas você trabalhou no mês: "; cin >> ht;

    salario = vh * ht;

    cout << "===============================" << endl;
    cout << "Mês >> " << mes << endl;
    cout << "Valor Hora >> R$" << vh << endl;
    cout << "Horas trabalhadas no mês >> " << ht << endl;
    cout << "Salario de "<< mes << " >> R$" << salario << endl;
    cout << "===============================" << endl;

    return 0;
}