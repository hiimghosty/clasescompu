#include <iostream>
using namespace std;

void suma()
{
    int a, b, resultado;
    cout << "Introducir un numero";
    cin >> a;
    cout << "Introducir otro numero";
    cin >> b;
    cout << "El resultado es: " << a + b;
}

int main()
{
    suma();

    return 0;
}