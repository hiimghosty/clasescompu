#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    /*Codigo ejemplo para ilustrar la importancia en usar fflush,
    compilar el codigo una vez con el fflush, y luego comparar que pasa si no se 
    usa*/
    char cad1[100], cad2[100];
    cout << "Intorducir la cadena 1" << endl;
    cin >> cad1;
    cout << "Introducir la cadena 2" << endl;
    fflush(stdin); //Borrar o agregar esta linea de codigo para probar que pasa
    cin.getline(cad2, 100);
    cout << "La cadena 1 es " << cad1 << endl;
    cout << "La cadena 2 es " << cad2 << endl;

    return 0;
}