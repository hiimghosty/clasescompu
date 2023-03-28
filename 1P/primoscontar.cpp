#include<iostream>
#include<math.h>
using namespace std;
//Pedir al usuario que introduzca un numero N(Validar, que sea entero y positivo)
//Imprimir es primo si lo es, y no es primo si no lo es
int validar(){
	float n;
	do{
		cout<< "Ingresar un numero N, entero y positivo"<<endl;
		cin>>n;
	} while(int(n)!=n or n<0);
	
	return n;
}
bool esPrimo(int n){
	//cierto caso, return true
	//cierto otro caso, return false
	for(int i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	n=validar();
	if(esPrimo(n)==true) cout<<"Es primo"<<endl;
	else cout <<"No es primo"<<endl;
	return 0;
	
}
