/*Lea una cadena desde teclado y determine qué caracteres se encuentran repetidos, y cuántas
veces aparece repetido cada caracter. Imprimir la cadena original, y si hubiere un carácter
repetido o más, imprimir dicho carácter junto con la cantidad de veces que aparece en la
cadena.*/
//Codigo de Abel Caballero
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char cad1[100];
    cin.getline(cad1, 100);
    cout << "La cadena original es: " << cad1 << endl;
    int tam = strlen(cad1);
    int cont = 0, i, j, menor;
    // ordenamos arreglo
    for (i = 0; i < tam; i++)
    {
        menor = cad1[i];
        for (j = i + 1; j < tam; j++)
        {
            if (cad1[j] < menor)
            {
                menor = cad1[j];
                cad1[j] = cad1[i];
                cad1[i] = menor;
            }
        }
    }
    for (i = 0; i < tam; i++)
    {
        cont = 0;
        for (j = i + 1; j < tam; j++)
        {
            if (cad1[i] == cad1[j] and cad1[j] != ' ' and cad1[j] != 0)
            {
                cont++;
                cad1[j] = 0;
            }
        }
        cont = cont + 1;
        if (cont != 1)
            cout << "el caracter " << cad1[i] << " aparece " << cont << " veces" << endl;
    }

    return 0;
}
