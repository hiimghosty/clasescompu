#include <iostream>
#include <cstdlib>
using namespace std;
//FALTA CORREGIR
void impresionDeVector(int vector[], int tam)
{
    for (int i = 0; i < 20; i++)
    {
        cout << vector[i] << " ";
    }
}
void generarV(int V[], int n)
{
    //cout << "introduzca las componentes del vector:";
    for (int i = 0; i < n; i++)
    {
        V[i]  = 0 + rand() % (100 - 0 + 1);
    }
}

void cantAparicion(int V[], int n)
{
    int cont = 0, x;
    cout << "introduzca un numero:";
    cin >> x;
    for (int j = 0; j < n; j++)
    {
        if (x == V[j])
            cont++;
    }
    if (cont != 0)
        cout << "el numero " << x << " aparecio " << cont << " veces";
    else
    {
        cout << "el numero" << x << "no es componente del vector";
    }
}

int MenosAparicion(int V[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        int cont1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (V[i] == V[j] and i != j)
                cont1++;
        }
        if (cont1 == 0)
        {
            return V[i];
            break;
        }
    }
}

bool estaOrdenado(int V[], int n)
{
    bool ascendente = true;
    int max = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (V[n - i] < V[max - j])
            {
                ascendente = false;
                break;
            }
        }
        max--;
    }
    return ascendente;
}

int main()
{
    int n;
    int V[n];
    cout << "introduzca el numero de componentes del vector:";
    cin >> n;
    generarV(V, n);
    impresionDeVector(V,n);
    cantAparicion(V, n);
   // cout << MenosAparicion(V, n);
    if (estaOrdenado(V, n) == true)
        cout << "true";
    else
        cout << "false ";
    return 0;
}
