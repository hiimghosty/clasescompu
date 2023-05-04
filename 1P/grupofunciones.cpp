#include <iostream>
#include <math.h>
using namespace std;

float suma(float num1, float num2)
{
    // sumar algo
    float respuesta;
    respuesta = num1 + num2;

    return respuesta;
}

int main()
{
    // Retorna en el main la suma de dos numeros

    cout << "Introducir dos numeros";

    float a, b, resultado;
    float x;
    cin >> a;
    cin >> b;
    resultado = suma(a, b);
    cout << "El resultado de sumar " << a << " con " << b << " es: " << resultado;

    return 0;
}