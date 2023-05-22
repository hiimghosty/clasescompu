#include <iostream>
using namespace std;
int main()
{

    int numero = 5;
    // Usar el * para declarar, es para declarar un puntero
    int *pt = &numero;
    cout << &numero << endl;
    cout << pt << endl;
    // Usar fuera de una declaracion, se le como
    //* operador desreferenciador
    cout << *pt << endl;
    cout << "Cambio el valor de numero" << endl;
    numero = 9;
    cout << "*pt ahora vale:" << endl;
    cout << *pt << endl;
    cout << "Cabmio valor de *pt " << endl;
    *pt = 10;
    cout << "Ahora numero vale: " << endl;
    cout << numero << endl;

    return 0;
}