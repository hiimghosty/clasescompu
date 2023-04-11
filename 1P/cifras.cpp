#include<iostream>
using namespace std;

int main(){
    //Programa que pide al usuario que ingrese un numero, e imprimir separado con coma
    //las cifras de derecha a izquierda
    cout<<"Introducir un numero entero";
    int n;
    cin>>n;
    int digito=0;
    while(n>0){
        digito=n%10;
        cout<<digito<<",";
        n=n/10;
    }
    return 0;
}