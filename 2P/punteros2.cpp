#include <iostream>
using namespace std;

void modificarN(int *x)
{
    *x = 48;
    
}

int main()
{

    int numero = 5;
    int *p = &numero; // almacena la direccion de mememoria de otra variable
    modificarN(p);
    cout << "El nuevo valor de numero es: " << numero << endl;

    return 0;
}