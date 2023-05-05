#include <iostream>
#include <math.h>
using namespace std;

int validar()
{
    // Funcion que valida un numero si es entero y positivo
    float a;

    do
    {
        cout << "Introducir un numero entero y positivo";
        cin >> a;
    } while (a != int(a) or a < 0);

    return a;
}

double factorial(int k)
{
    double producto = 1;
    for (int i = 1; i <= k; i++)
    {
        producto = producto * i;
    }

    return producto;
}

void sumatoria(int x, int n)
{
    double resultado = 0;
    for (int i = 0; i <= n; i++)
    {
        resultado = resultado + (pow(x, i)) / factorial(i);
    }
    cout << "El resultado es: " << resultado;
}

int main()
{
    /*47.Lea un numero X cualquiera y calcule el valor de e^x utilizando su
    aproximacion con serie de potencias: e^x
    es la sumatoria de K=0 hasta N de x^K/fact(k) en donde a mayor
    N (entero y positivo), mayor aproxima-
    cion al valor real.*/
    int x, n;
    x = validar();
    n = validar();
    sumatoria(x, n);

    
    return 0;
}