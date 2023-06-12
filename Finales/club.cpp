#include <iostream>
#include <cstdio>
using namespace std;
/*Sean Nombre, sexo, anho tres variables que contienen el nombre, sexo y años de pertenencia
de cada uno de los miembros de un club. Masculino o Femenino se denota mediante ‘M’ y ‘F’,
respectivamente.
Diseñar un programa mediante arreglo de estructura, se ingrese los datos de N miembros del club,
imprima todos los miembros del club con todos sus datos, además busque la persona que tiene
mayor antigüedad e indicar si es masculino o femenino.
*/
struct miembros
{
    char nombre[20];
    char sexo;
    unsigned int anhos;
};

void cargaDeMiembros(miembros m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Cargando datos del miembro " << i + 1 << endl;
        cout << "Nombre:";
        fflush(stdin);
        cin.getline(m[i].nombre, 20, '\n');
        cout << "Sexo: ";
        cin >> m[i].sexo;
        cout << "Anhos: ";
        cin >> m[i].anhos;
    }
}

void imprimirMiembros(miembros m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Imprimiendo datos del miembro " << i + 1 << endl;
        cout << "Nombre:";
        cout << m[i].nombre << endl;
        cout << "Sexo: ";
        cout << m[i].sexo << endl;
        cout << "Anhos: ";
        cout << m[i].anhos << endl;
        cout << "---------------------------------------------------------" << endl;
    }
}

int mayorAntiguedad(miembros m[], int n)
{
    int masAntiguo = m[0].anhos;
    int posMasAntiguo = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i].anhos > masAntiguo)
            posMasAntiguo = i;
        masAntiguo = m[i].anhos;
    }
    return posMasAntiguo;
}

void imprimirMasAntiguo(char nombre[], char sexo)
{
    cout << "El nombre y sexo del mas antiguo es: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo: " << sexo << endl;
}

int main()
{
    cout << "Introducir cantidad de miembros" << endl;
    int cantidad;
    cin >> cantidad;
    miembros m[cantidad];
    cargaDeMiembros(m, cantidad);
    imprimirMiembros(m, cantidad);
    int posMasAntiguo = mayorAntiguedad(m, cantidad);
    imprimirMasAntiguo(m[posMasAntiguo].nombre, m[posMasAntiguo].sexo);
    return 0;
}