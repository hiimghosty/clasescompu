#include <iostream>
#include <cstdio> //se usa esta libreria para el fflush
using namespace std;
int main()
{
    /*Codigo ejemplo para ilustrar la importancia en usar fflush,
    compilar el codigo una vez con el fflush, y luego comparar que pasa si no se
    usa*/
    char nombre[100], nombreCompleto[100];
    cout << "Intorducir nombre" << endl;
    cin.getline(nombre, 100, '\n');

    cout << "Introducir nombre completo" << endl;
    //fflush(stdin); // Borrar o agregar esta linea de codigo para probar que pasa
    cin.getline(nombreCompleto, 100, '\n');
    cout << "La cadena 1 es " << nombre << endl;
    cout << "La cadena 2 es " << nombreCompleto << endl;

    return 0;
}