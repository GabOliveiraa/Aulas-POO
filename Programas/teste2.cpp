#include <iostream>

using namespace std;

int main()
{
    int16_t a, b, x;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    cout << "Digite oo segundo valor: ";
    cin >> b;

    if (a < b)
    {
        x = a + b;
    }
    else if (a > b)
    {
        x = a - b;
    }
    else if (a == b)
    {
        x = a * b;
    }

    cout << "Resultado = " << x << endl;

    cin.get();
    return 0;
}