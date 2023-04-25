#include<iostream>
#include<math.h>
using namespace std;

long factorial(int m){
	long resultado=1;
	for(int i=1; i<=m;i++){
		resultado=resultado*i;
	}
	return resultado;
}


int main(){
	/*47.Lea un numero X cualquiera y calcule el valor de e^x utilizando su aproximacion con serie de potencias: e^x
	 es la sumatoria de K=0 hasta N de x^K/fact(k) en donde a mayor N (entero y positivo), mayor aproxima-
	cion al valor real.*/
	
	int n, k;
	float x;
	float suma=0;
	cout << "Introducir N" <<endl;
	cin >> n;
	cout <<"Introducir X" <<endl;
	cin >> x;
	for (k=0 ; k<=n; k++){
		suma=suma+(pow(x,k)/factorial(k));
	}
	cout << "El valor de e^"<<x<<":"<<suma;
	return 0;
}
