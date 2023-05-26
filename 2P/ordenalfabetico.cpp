#include <iostream>
#include <cstring>
using namespace std;
/*Pedir al usuario que ingrese una cadena, y ordenarla en orden alfabetico*/

void ordenarCadena(char cad[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (cad[j] > cad[j + 1])
            {
                char aux = cad[j];
                cad[j] = cad[j + 1];
                cad[j + 1] = aux;
            }
        }
    }
}

int main()
{
    char cad1[20];
    cin.getline(cad1, 20, '\n');
    int longitud = strlen(cad1);
    ordenarCadena(cad1, longitud);
    cout << "La cadena ordenada alfabeticamente es: " << cad1;

    return 0;
}