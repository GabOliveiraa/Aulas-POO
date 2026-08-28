// 2. Escreva um programa que peça para o usuário informar um número inteiro e então mostre
// a mensagem: “O número informado foi <número>.”

#include <iostream>

using namespace std;

int main(){
    
    int num;

    cout << "Insira um número inteiro: "; cin >> num;
    
    cout << "O número informado foi: " << num << endl;

    return 0;
}