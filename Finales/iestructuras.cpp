#include <iostream>

using namespace std;

struct Autos
{
    char modelo[20];
    char marca[20];
    unsigned int anho;
};

void imprimirAutos(Autos a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Datos del auto nro " << (i + 1) << endl;
        cout << "modelo:" << endl;
        cout << a[i].modelo << endl;
        cout << "marca:" << endl;
        cout << a[i].marca << endl;
        cout << "anho" << endl;
        cout << a[i].anho << endl;
    }
}

int main()
{
    int m;
    cout << "Introducir cuantos autos tienes" << endl;
    cin >> m;
    cout << "Introducir la marca" <<endl;
    return 0;
}