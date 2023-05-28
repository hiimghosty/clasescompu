#include <iostream>
using namespace std;
int main()
{

    int numero;
    numero = 5;
    int &edad = numero;
    cout << "El valor de numero es:" << numero;
    cout << "El valor de edad es:" << edad;

    //&sirve para sacar la direccion de memoria
    cout << "La direcc de memoria de numero es:" << &numero << endl;
    cout << "La direccion de memoeria de edad es:" << &edad << endl;
    return 0;
}