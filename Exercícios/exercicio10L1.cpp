// 10. Escreva um programa para realizar a leitura de dois valores inteiros e armazená-los nas
// variáveis A e B. Em seguida, efetuar a troca dos valores, de forma que a variável A passe a
// possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar
// os valores antes e depois da troca.
#include <iostream>

using namespace std;

int main(void){

    int A, B;

    cout << "Insira um valor para <A>: ";
    cin >> A;
    cout << "Insira um valor para <B>: ";
    cin >> B;

    cout << "======= Antes da troca =======";
    cout << "\nValor de A >> " << A << "\nValor de B >> " << B << endl;

    int aux = A;
    A = B;
    B = aux;

    cout << "======= Depois da troca =======";
    cout << "\nValor de A >> " << A << "\nValor de B >> " << B << endl;

    return 0;
}