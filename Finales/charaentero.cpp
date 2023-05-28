#include <iostream>
using namespace std;
/*Pedir al usuario que introduzca un numero, pero guardarlo en una cadena, pasar la cadena
a un numero, e imprimir el numero multiplicado  por dos*/

int charInt(char cad[])
{
    int resultado = 0;
    int signo = 1;
    int i = 0;
    // Ver el signo;
    if (cad[0] == '-')
    {
        signo = -1;
        i++; // Para saltar el signo menos
    }

    // Convertir cada caracter a digito y contruir el numero

    while (cad[i] != '\0')
    {
        resultado = resultado * 10 + (cad[i] - '0');
        i++;
    }

    return resultado * signo;
}

int main()
{
    char cad[10];
    cout << "Introducir un numero: " << endl;
    cin >> cad;
    int numero = charInt(cad);
    cout << "El numero original es: " << numero << endl;
    cout << "El numero multiplicado por 2 es: " << 2 * numero << endl;

    return 0;
}