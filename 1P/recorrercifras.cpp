#include<iostream>
using namespace std;
//Pedir al usuario que introduzca un numero N, e imprimir todas sus cifras de derecha a izquierda
int main(){
	int n;
	cout <<"Introducir un numero N"<<endl;
	cin>>n;
	cout<< "Los digitos de derecha a izquierda son:"<<endl;
	int digito;
	while(n>0){
		digito=n%10;
		cout << digito;
		n=n/10;
	}
	
	return 0;
}
