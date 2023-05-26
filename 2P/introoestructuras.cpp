#include <iostream>
using namespace std;

struct Automoviles
{
    char marca[20];
    char modelo[10];
    unsigned int anho;
};

void imprimirAutos(Automoviles a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "DATOS DEL AUTO NRO. " << i + 1 << endl;
        cout << "Marca: ";
        cout << a[i].marca << endl;
        cout << "Modelo: ";
        cout << a[i].modelo << endl;
        cout << "Anho: ";
        cout << a[i].anho << endl;
    }
}

void cargaDeAutos(Automoviles a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "DATOS DEL AUTO NRO. " << i + 1 << endl;
        cout << "Marca: ";
        cin >> a[i].marca;
        cout << "Modelo: ";
        cin >> a[i].modelo;
        cout << "Anho: ";
        cin >> a[i].anho;
    }
}

int main()
{

    cout << "Introducir cantidad de autos" << endl;
    int n;
    cin >> n;
    Automoviles a[n]; //aca guardo bmw
    Automoviles b[10]; //aca guardo kia
    Automoviles c[15];  //aca guardo volkswagen
    cargaDeAutos(a, n);
    cout << "Mis autos son: ";
    imprimirAutos(a, n);
    return 0;
}