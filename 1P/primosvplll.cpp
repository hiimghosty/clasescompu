#include<iostream>
#include<math.h>
using namespace std;
//Escriba una funci�n para generar una serie de n�meros primos comprendidos entres 2 y N
bool esPrimo(int n){
    for(int i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;

}
void imprimir_primos(int n){
// escriba su codigo
	for(int i=2; i<=n; i++){
		if(esPrimo(i)==true) cout<<i<< " ";
	}
}

main(){
	int n;
	cin>>n;
	imprimir_primos(n);
}
