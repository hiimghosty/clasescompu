#include<iostream>
using namespace std;
//Pedir al usuario que ingrese un numero entero y positivo, validar
//Decir si el numero es primo o no
int validar(){
	float n;
	do{
		cout << "Introducir n positivo y entero"<<endl;
		cin>>n;
	} while(int(n)!=n  or n<0);
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
	if(esPrimo(n)==true) cout<< "Es primo"<<endl;
	else cout<<"No es primo"<<endl;
	
	
	
	return 0;
}
