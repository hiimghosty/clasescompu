#include<iostream>
#include<math.h>

using namespace std;
int main(){
    /* Asegurándose de que el número ingresado sea un número natural,
     calcular el factorial de dicho
número*/

    double resultado=1; //Usamos double porque tendremos numeros muy grandes
    float n;
    do{
        cout << "Introducir un numero entero y positivo: ";
        cin >> n;
    } while(n!=int(n) or n<=0);
    for(int i=1; i<=n; i++){
        resultado=resultado*i;
    }
    cout<<"El resultado es: "<<resultado;
    
    return 0;
}