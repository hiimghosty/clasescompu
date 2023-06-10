#include <iostream>
using namespace std;

int charInt(char cad[])
{
    int resultado = 0;
    int signo = 1;
    int i = 0;
    // Ver el signo
    if (cad[0] == '-')
    {
        signo = -1;
        i++;
    }

    // Convertir cada caracter a digito
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
    cout << "El numero hecho entero es: " << numero << endl;
    cout << "El numero multiplicado por 2 es: " << 2 * numero << endl;

    return 0;
}