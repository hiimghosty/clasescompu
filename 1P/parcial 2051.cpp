#include<iostream>
#include<math.h>
using namespace std;
/* 
Lea un n�mero entero y positivo N y otro entero y positivo de un d�gito P 
(validarambos) 
del n�mero entero N eliminar la posici�n del d�gito indicado por P 
(Ejemplo:
N = 52647; P = 2; resultado 5267).*/
int validarN(){
	float n;
	do{
		cout << "Introducir N positivo y entero"<<endl;
		cin >>n;
	}while(int(n)!=n or n<=0);
}
int validarP(){
	float n;
	do{
		cout << "Introducir P positivo y entero"<<endl;
		cin >>n;
	}while(int(n)!=n or n<=0 or n>=10);
}
int main(){
	int n;
	int p;
	n=validarN();
	p=validarP();
	int digito;
	int contadorCifraDerecha=1;
	int nuevaN=0;
	while(n>0){
		digito=n%10;
		if(contadorCifraDerecha<p) nuevaN=nuevaN+digito*pow(10,(contadorCifraDerecha-1));
		if(contadorCifraDerecha>p) nuevaN=nuevaN+digito*pow(10,(contadorCifraDerecha-2));
		contadorCifraDerecha++;
		n=n/10;
		
	}
	cout<< "El nuevo numero es: " <<nuevaN;
	return 0;
}
