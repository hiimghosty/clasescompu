#include<iostream>
using namespace std;

void suma(){
    float a,b,resultado;
    cout << "Introducir dos numeros"<<endl;
    cin >> a;
    cin >> b;
    resultado = a + b;
    cout << "El resultado es: " << resultado;
}

int main(){
    //hacer un programa en c++ que pida al usuario que ingrese dos numeros y los sume
    //usar el main solo para llamar a la funcion
    suma();

    return 0;
}