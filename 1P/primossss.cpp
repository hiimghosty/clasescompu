#include<iostream>
using namespace std;
//Pedir al usuario que ingrese un numero N entero y positivo(validar) y decir si es primo o no


int validar(){
	float n;
	do{ 
		cout << "Ingresar un numero N entero y positivo"<<endl;
		cin >> n;
	} while(n!=int(n) or n<0);
	
	return n;
}
bool esPrimo(int n){
	for(int i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	n=validar();
	bool primo;
	primo=esPrimo(n);
	if(primo) cout <<"Es primo";
	else cout << "No es primo"; 
	return 0;
}


