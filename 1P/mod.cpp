#include<iostream>
using namespace std;
int main(){
	cout<<"Introducir un numero ";
	float numero;
	cin>>numero;
	int entero;
	entero=numero;
	//a==b SI ES QUE SON IGUALES
	//a!=b SI ES QUE NO SON IGUALES
	if(entero!=numero){
		cout<<"Es decimal";
	}
	else cout<<"Es entero";
	
	
	return 0;
}
