#include <iostream>
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
    char Nombre[20];
    char sexo;
    unsigned int anho;
};

void cargaDeMiembros(miembros m[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Miembro nro " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> m[i].Nombre;
        cout << "Sexo: ";
        cin >> m[i].sexo;
        cout << "Anhos de antiguedad: ";
        cin >> m[i].anho;
    }
}

void hombreMasAntiguo(miembros m[], int n)
{
    int posPrimerHombre;
    for (int i = 0; i < n; i++)
    {
        if (m[i].sexo == 'H')
        {
            posPrimerHombre = i;
            break;
        }
    }

    cout << "El primer hombre esta en la posicion" << posPrimerHombre;
}

int main()
{
    cout << "Introducir cantidad de miembros" << endl;
    int n;
    cin >> n;
    miembros club[n];
    cargaDeMiembros(club, n);
    hombreMasAntiguo(club, n);
    // mujerMasAntigua(club, n);
    return 0;
}