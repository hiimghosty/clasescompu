#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    cout << "Introducir un numero en morse: ";
    int cont = 0, cont1 = 5, i, j, k;
    char cad[100];
    cin.getline(cad, 100);
    int tam = strlen(cad);
    for (i = 0; i < tam; i = i + 5 + 1)
    {
        cont = 0;
        cont1 = 0;
        if(cad[i] == ' ') i++;//Si hay un espacio, lo saltamos
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
            for (k = i; k < (i + 5); k++)
            {
                if (cad[i] == cad[k])
                    cont1++;
            }
            cout << cont1;
        }
        if ((cad[i + 5] == ' ') and (cad[i + 5 + 1] == ' '))
        {
            cout << " ";
        }
    }
    return 0;
}
