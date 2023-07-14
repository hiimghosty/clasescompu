#include <iostream>
#include <cstdio>
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

    char nombre[20];
    cout << "Introducir tu nombre: ";
    cin >> nombre;
    // Problema 1, el espacio termina mi cadena
    // Problema 2, es que aunque me pase de caracteres, igual se guarda ese exceso de caracteres

    cout << endl<< nombre;
    cout << "Introducir tu nombre completo: ";
    char nombreCompleto[20];
    fflush(stdin); 
    cin.getline(nombreCompleto,20,'\n');
    cout << nombreCompleto;
    return 0;
}