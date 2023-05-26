#include <iostream>
#include <cstring> //Libreria para varias funciones con cadenas
/*
strlen(cad1); -----> devuelve la cantidad de caracteres de la cad1 sin contar '\0'

strcpy(cad1,cad2); -----> copia la cad2 en la cad1

strcat(cad1,cad2); -----> concatena las cadenas cad1 y cad2 (el resultado queda en cad1)

int a=strcmp(cad1,cad2); -----> devuelve el valor que representa la diferencia entre
ambas cadenas, si son iguales da 0
*/
using namespace std;
int main()
{
    char cad1[5] = {'h', 'o', 'l', 'a', '\0'}; // Caracter terminador
    char cad2[5] = "hola";                     // en todas las cadenas esta el caracter terminador

    cout << "La cadena 1 es: ";
    cout << cad1 << endl;
    cout << "La cadena 2 es: ";
    cout << cad2 << endl;

    char nombre[20];
    char nombrecompleto[20];
    cout << "Introducir nombre completo";
    cin.getline(nombrecompleto,20,'\n');
    cout << "Tu nombre completo es: ";
    cout << nombrecompleto;
    
    return 0;
}