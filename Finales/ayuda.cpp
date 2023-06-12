#include <iostream>
using namespace std;
/*Introducir un numero en una cadena, e implementar una funcion que guarde ese numero
pero en otra variable del tipo entero*/

int charEntero(char cadena[])
{
    int resultado = 0;
    int signo = 1;
    int i = 0;
    
    //Me encargo del signo
    if (cadena[0] == '-'){
        signo = -1;
        i++;
    }

    while (cadena[i]!='\0'){
        resultado = resultado * 10 + (cadena[i] - '0');
        i++;
    }
    
    return resultado * signo;
}

int main()
{
    char numeroCadena[20];
    cout << "Introducir un numero";
    cin >> numeroCadena;
    int numeroEntero = charEntero(numeroCadena);
    cout << "La cadena es " << numeroCadena << endl;
    cout << "El numero entero convertido es " << numeroEntero << endl;
    return 0;
}