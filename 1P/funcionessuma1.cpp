#include<iostream>
#include<math.h>
using namespace std;

float suma(float numero1, float numero2){
    float resultado;
    resultado = numero1 + numero2;
    return resultado;
}
int main (){
    //Hacer un programa en c++ que pida al usuario que ingrese dos numeros
    //Calcular la suma en una funcion, e imprimir en el main
    float a,b,resultado;
    cout << "Introducir dos numeros"<<endl;
    cin >> a;
    cin >> b;
    resultado = suma(a,b);
    cout << "El resultado es: " << resultado;
    return 0;
}