#include<iostream>
#include<math.h>
using namespace std;

/* PRUEBAAA HOLAAAAA
Lea un n�mero entero y positivo N y otro entero y positivo de un d�gito P (validarambos) 
del n�mero entero N eliminar la posici�n del d�gito indicado por P 
(Ejemplo:
N = 52647; P = 2; resultado 5267).*/
int validar(){
	float n;
	do{
		cout << "Introducir N entero y positivo"<<endl;
		cin>>n;
	} while(int(n)!=n or n<0);
	return n;
}
int validarP(){
	float n;
	do{
		cout << "Introducir un numero P entero positivo y de un digito"<<endl;
		cin>>n;
	} while(int(n)!=n or n<0 or n>=10);
}
int main(){
	int n;
	int d; //digito
	n=validar();
	int p;
	p=validarP();
	cout << "El valor valido de N es "<<n<<endl;
	cout << "El valor valido de P es "<<p<<endl;

	int nuevoN=0;
	int contadorDerecha=1;
	while(n>0){
					d=n%10;
					if(contadorDerecha<p) nuevoN=nuevoN+d*pow(10,contadorDerecha-1);
					if(contadorDerecha>p) nuevoN=nuevoN+d*pow(10,(contadorDerecha-2));
					
					//cout<<d<<endl;
					n=n/10;
					contadorDerecha++;
	}
	cout << "Nuevo Numero es:" <<nuevoN<<endl;
	return 0;
}
