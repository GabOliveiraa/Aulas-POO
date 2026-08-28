// 3. Escreva um programa que peça para o usuário informar 4 notas bimestrais de um aluno. Em
// seguida, o programa deve calcular e exibir a média final que o aluno obteve. Para apresentar o
// resultado, considere a utilização de duas casas decimais.
#include <iostream>
#include <iomanip>

using namespace std;

float calcularMedia(){
    float notas[4];
    float soma = 0;

    for(int i = 0; i < 4; i++){
        cout << "Informe a " << (i + 1 ) << " nota: ";
        cin >> notas[i];
        soma += notas[i];
    }

    float media = soma / 4.0;

    return media;
};

int main(){

    float mediaFinal = calcularMedia();

    cout << setprecision(2) << fixed << right;
    cout << "\nA média final é: " << mediaFinal << endl; 

    return 0;
}