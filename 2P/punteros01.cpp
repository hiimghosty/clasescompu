#include <iostream>
using namespace std;
/*Elabore un programa que cargue e imprima los datos de un vector de enteros
mediante funciones y punteros.*/
void cargaDeVector(int *pt, int n){

    for (int i=0; i<n; i++){
        cin >> *(pt+i);
    }
}

void imprimirVector(int *pt, int n){
    for(int i=0; i<n; i++){
        cout << *(pt+i) << " ";
    }
}

int main(){
    int n;
    cout << "Introduzca la dimension del vector: ";
    cin >> n;
    int A[n];
    int *pt = &A[0];
    cargaDeVector(pt,n);
    imprimirVector(pt,n);

    return 0;
}