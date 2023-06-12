#include <iostream>
#include <cstring>
using namespace std;
// Si se fijan, en morse los primeros 5 numeros(1 al 5) se definen con la cantidad de puntos
// Que tienen, es decir .---- es 1, ..--- es 2, y asi, entonces para contar estos numeros
// Contamos la cantidad de puntos de todos los morse que empiecen con un .

// En contrapartida, los que empiezan con -, seria sumarle 5 a la cantidad de - que tienen
// Por ejemplo, -.... es 6 (1+5), luego 7 es --...(2 + 5), es decir sumamos 5 a la cantidad
// De guiones que tienen. El 0 es un caso especial.
int main()
{
    int cont = 0, cont1 = 5, i, j, k;
    char cad[100];
    cin.getline(cad, 100);
    int tam = strlen(cad);
    for (i = 0; i < tam; i = i + 5 + 1)
    {
        cont = 0;
        cont1 = 0;
        if (cad[i] == ' ' and cad[i + 1] == ' ')
            i = i + 2; // Si hay un espacio, lo saltamos
        if (cad[i] == '.')
        {
            for (j = i; j < (i + 5); j++)
            {
                if (cad[j] == cad[i])
                    cont++;
            }
            cout << cont;
        }
        if (cad[i] == '-')
        {
            cont1 = 5;
            for (k = i; k < (i + 5); k++)
            {
                if (cad[i] == cad[k])
                    cont1++;
            }
            if (cont1 == 10)
                cout << 0;
            else
                cout << cont1;
        }
        if ((cad[i + 5] == ' ') and (cad[i + 5 + 1] == ' '))
        {
            cout << " ";
        }
    }
    return 0;
}
