#include <iostream>
using namespace std;

void imprimirVector(int N[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        cout << N[i] << " ";
    }
}

void ordenamientoBurbuja(int N[], int tam)
{
    for (int i = 0; i < (tam - 1); i++)
    {

        for (int j = 0; j < (tam - 1); j++)
        {

            if (N[j] > N[j + 1])
            {
                int aux = N[j];
                N[j] = N[j + 1];
                N[j + 1] = aux;
            }
        }
    }
}

int main()
{
    // Burbuja : es muy lento
    // Burbuja : en una primera iteracion, el mayor elemento termina en la ultima
    // posicion, y ya esta ordenado

    int N[] = {98, 29, 45, 299, 2, 1, -1};
    int tamanho = 7;

    ordenamientoBurbuja(N, tamanho); // aca ordene el vector
    imprimirVector(N, tamanho);      // LE ESOTY MANDANDO EL VECTOR ORDENADO

    return 0;
}