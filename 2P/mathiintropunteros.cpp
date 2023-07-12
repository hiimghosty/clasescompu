#include <iostream>
using namespace std;
int main()
{
    int numero = 0;    // Una variable int que guarda el 5
    int *pt = &numero; // Variable puntero con el nombre pt que guarda la direccion de numero
    numero += 10;
    // Imprime 5s
    cout << numero << endl;
    // Imprime la direccion de memoria de numero 0xf1925ffcb4
    cout << &numero << endl;
    // Imprime la direccion de memoria de numero con el puntero 0xf1925ffcb4
    cout << pt << endl;

    cout << "Vemos que esta guardado en la direccion de memoria que guardo pt" << endl;
    cout << *pt;

    cout << endl
         << "Ahora cambio *pt" << endl;
    *pt = 89;
    cout << "Numero vale: " << numero << endl;
    cout << "*pt vale: " << *pt << endl;
    return 0;
}