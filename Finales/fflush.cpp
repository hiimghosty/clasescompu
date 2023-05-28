#include <iostream>
#include <cstdio> //se usa esta libreria para el fflush
using namespace std;
int main()
{
    /*Codigo ejemplo para ilustrar la importancia en usar fflush,
    compilar el codigo una vez con el fflush, y luego comparar que pasa si no se 
    usa*/
    char nombre[100], cad2[100];
    cout << "Intorducir nombre" << endl;
    cin >> nombre;
    cout << "Introducir nombre completo" << endl;
    fflush(stdin); //Borrar o agregar esta linea de codigo para probar que pasa
    cin.getline(cad2, 100,'\n');
    cout << "La cadena 1 es " << nombre << endl;
    cout << "La cadena 2 es " << cad2 << endl;

    return 0;
}