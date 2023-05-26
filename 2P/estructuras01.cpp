#include <iostream>
using namespace std;

struct
{
    int cedula;
    char nombre[20];

} Datos;

int main()
{
    cout << "Introducir cedula";
    cin>>Datos.cedula;
    cout <<"Introducir nombre";
    cin>>Datos.nombre;

    cout <<Datos.cedula;
    cout <<Datos.nombre;
    return 0;
}
