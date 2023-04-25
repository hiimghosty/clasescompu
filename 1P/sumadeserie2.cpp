#include<iostream>
#include<math.h>
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

double factorial(int x){
    double resultado=1;
    for(int i=1 ; i<=x ; i++){
        resultado=resultado*i;
    }

    return resultado;
}

int main(){
    /*47.Lea un numero X cualquiera y calcule el valor de e^x utilizando su 
    aproximacion con serie de potencias: e^x
	es la sumatoria de K=0 hasta N de x^K/fact(k) en donde a mayor N 
    (entero y positivo), mayor aproxima-
	cion al valor real.*/
    int N,X;
    double fact,sumatoria=0;

    N = validar();
    X = validar();
    for( int K=0 ; K<=N; K++){
        sumatoria = sumatoria + pow(X,K)/(factorial(K));
    }
    cout << "El valor aproximado de: e^"<<X<<" es:"<<sumatoria<<endl;
    return 0;
}