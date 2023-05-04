#include <iostream>
using namespace std;

void suma(float a, float b)
{
    float resultado = a + b;
    cout << "El resultado de sumar " << a << " con " << b << " es: " << resultado;
}

int main()
{
    // Hacer un programa que sume dos numeros, pero desarrollar todo en funciones
    float a, b;
    cout << "Introducir dos numeros";
    cin>>a;
    cin>>b;
    suma(a,b);
    
    return 0;
}