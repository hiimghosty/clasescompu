#include <iostream>
using namespace std;

struct
{
    int cedula;
    char nombre[20];

} Datos;

int main()
{
    cin>>Datos.cedula;
    cin>>Datos.nombre;
    return 0;
}

