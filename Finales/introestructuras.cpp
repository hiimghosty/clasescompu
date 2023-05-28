#include <iostream>
using namespace std;

struct Autos
{
    char modelo[20];
    char marca[20];
    unsigned int anho;
};


void imprimirAutos(Autos a[], int m)
{
    cout << "Los autos que tengo disponible son: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "modelo" << endl;
        cout << a[i].modelo << endl;
        cout << "marca" << endl;
        cout << a[i].marca << endl;
        cout << "anho" << endl;
        cout << a[i].anho << endl;
    }
}

int main()
{
    Autos a[3];
    int cantidadAutos = 3;
    for (int i = 0; i < 3; i++)
    {
        cout << "Introducir el modelo" << endl;
        cin >> a[i].modelo;
        cout << "Introducir la marca" << endl;
        cin >> a[i].marca;
        cout << "Introducir el anho" << endl;
        cin >> a[i].anho;
    }
    imprimirAutos(a, cantidadAutos);

    return 0;
}