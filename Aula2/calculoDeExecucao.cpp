#include <iostream>

using namespace std;

int main(){
    int n;
    int contador = 0;

    cout << "Digite n: ";
    cin >> n;

    for(int i = n / 2; i <= n; i ++) {
        int j = 0;
        while((j+ n / 2) <= n){
            int k = 1;

            while(k <= n){
                contador++;
                k = k * 2;
            }
            j = j + 1;
        }
    }
    cout << "Contador: " << contador << endl;
    return 0;
}