#include <iostream>
using namespace std;

void saludar(){
	cout <<"hola";
}

void suma(){
	float a;
	float b;
	cin >>a;
	cin >>b;
	float resultado;
	resultado=a+b;
	cout << resultado;
	saludar();
}

int main(){
	suma();
	
	return 0;
}
