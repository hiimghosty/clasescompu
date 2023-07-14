#include <iostream>
using namespace std;

struct Autos
{
    char modelo[20];
    char marca[20];
    int anho;
};

void imprimirAutos(Autos a[], int m)
{
    cout << "Los autos que tengo disponible son: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "Mostrando los datos del auto nro " << i + 1 << endl;
        cout << "modelo:";
        cout << a[i].modelo << endl;
        cout << "marca:";
        cout << a[i].marca << endl;
        cout << "anho:";
        cout << a[i].anho << endl;
    }
}

int main()
{
    Autos a[5];
    //Se puede tambien hacer en funciones
    for (int i = 0; i < 5; i++)
    {
        cout << "Introducir el modelo" << endl;
        fflush(stdin);
        cin.getline(a[i].modelo, 20, '\n');
        cout << "Introducir la marca" << endl;
        fflush(stdin);
        cin.getline(a[i].marca, 20, '\n');
        cout << "Introducir el anho" << endl;
        cin >> a[i].anho;
        cout << endl;
    }

    imprimirAutos(a,5);

    return 0;
}