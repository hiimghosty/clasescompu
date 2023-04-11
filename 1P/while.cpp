#include<iostream>
using namespace std;


int main(){
    //estructuras de repeticion
    //QUEREMOS PEDIR AL USUARIO QUE INGRESE UN NUMERO, Y LE VAMOS A SEGUIR PIDIENDO HASTA QUE
    //Ponga un numero entero
    float n; 
    cout << "Ingresa un numero entero: ";
    cin >> n;
    int aux=n; 
    while( aux!=n ){//Podemos garantizar que el numero NO es entero, siempre que entre al while
        cout << "Por favor, ingresa un numero entero";
        cin >> n; 
        aux=n; 
    }
    cout << "El numero que ingresaste si es entero";

    return 0;
}