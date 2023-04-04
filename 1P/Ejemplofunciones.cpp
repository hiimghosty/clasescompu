#include<iostream>
using namespace std;
float suma(float a, float b){
	float resultado;
	resultado=a+b;
	return resultado;
}
int main(){
	cout << "Ingresar x";
	float x;
	cin>>x;
	cout << "Ingresar y";
	float y;
	cin>>y;
	float respuesta;
	respuesta=suma(x,y);
	cout << suma(x,y);
	x=sqrt(100);
	return 0;
}
