#include<iostream>
using namespace std;

int validar(){
    float x;
    do{
        cout << "Introducir un numero entero";
        cin >> x;
    }while(x!=int(x));
    //SI YO LLEGO HASTA ACA, SI O SI X ES ENTERO
    return x;

}

int main(){
    //pedir al usuario que ingrese dos numeros y que ambos sean enteros, validar usando
    //la misma funcion
    int a,b;
    a = validar();
    b = validar();
    cout << "El valor de a es: " <<a<<endl;
    cout << "El valor de b es: " <<b<<endl;

    return 0;
}