#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
//FALTA TERMINARR
void cargarAsteriscos(char asteriscos[],int cantAsteriscos)
{
    for (int i = 0; i < cantAsteriscos; i++)
    {
        asteriscos[i] = '*';
    }
}

int main()
{
    int clave;
    char texto[100];
    cout << "Introducir clave: ";
    cin >> clave;
    cout << "Introducir texto: ";
    fflush(stdin);
    cin.getline(texto, 100, '\n');
    int cantAsteriscos = 99 - strlen(texto);
    char asteriscos[cantAsteriscos];
    cargarAsteriscos(asteriscos,cantAsteriscos);
    cout << "Cantidad de asteriscos: " << strlen(asteriscos) << endl;
    strcat(texto, asteriscos);
    cout << "La clave rellenada con asteriscos es: " << endl;
    cout << texto << endl;
    cout << "Caracteres: " << strlen(texto);
    char matriz[10][10];
    
    return 0;
}