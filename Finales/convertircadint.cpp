#include <iostream>
using namespace std;

// Pedir al usuario que ingrese un numero, guardarlo en una cadena, e imprimir
// El numero pero en un int, imprimir tambien el numero original multiplicado por 2

int convertir(char cadena[])
{
    int resultado = 0;
    int signo = 1;
    int i = 0;
    // Veo el signo
    if (cadena[0] == '-')
    {
        signo = -1;
        i++;
    }

    // Convertir cada caracter a digito
    while (cadena[i] != '\0')
    {
        resultado = resultado*10 + (cadena[i] - '0');
        i++;
    }

    return resultado*signo;
}

int main()
{
    char cadenaNumero[20];
    cout << "Introducir un numero";
    cin >> cadenaNumero;
    int numero = convertir(cadenaNumero);
    cout << "El int es: " <<numero<<endl;
    cout << "El numero multiplicado por 2 es: " <<numero*2;
    return 0;
}