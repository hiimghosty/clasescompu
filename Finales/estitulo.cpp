#include <iostream>
using namespace std;

bool esTitulo(char cad[])
{
    int contador = 0;
    int i = 0;
      while(cad[i]!='\0')
    {
        if(!(cad[0]>='A' && cad[0]<='Z') || (cad[i]>='!' && cad[i]<='/') )
        {
            contador++;
        }
        
        i++;
    }

    if (contador == 0)
        return true;
    else
        return false;
}

int main()
// Implementar un programa que reciba una cadena, de tamanho maximo 100. Y diga si es
// Titulo o no. Se considera titulo si empieza con mayuscula y el resto de sus caracteres son
// Letras en minuscula
{
    char cad1[100];
    cout << "Introducir una cadena: ";
    cin.getline(cad1, 100, '\n');
    if (esTitulo(cad1))
        cout << "Si es titulo";
    else
        cout << "No es titulo";

    return 0;
}