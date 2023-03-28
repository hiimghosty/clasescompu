#include<iostream>
#include<math.h>
using namespace std;
/* Escriba un programa en C++ en el que se ingrese por teclado un número entero (n), 
mayor que 1.00, menor
que 10.000.00 (validar). Dicho programa debe determinar la cantidad de dígitos del
 número (nc), a
continuación se extraen los dígitos (di) para generar un nuevo número cifrado con 
el siguiente criterio:
• Si el dígito di es un múltiplo de 3, se le suma 6 y se calcula el resto de 10.
• Si el dígito di es un múltiplo de 5, se le suma 5 y se calcula el resto de 10.*/
int cifras(int n){
	int contadorDeCifras=0;
	while(n>0){
		n=n/10;
		contadorDeCifras++;
	}
	return contadorDeCifras;
}
int main(){
	//VALIDAR
	int n;
	cout <<"Introducir N ";
	cin>>n;
	int nc;
	nc=cifras(n);
	cout << "El numero de cifras es: "<<nc<<endl;
	int nuevaN=0;
	int digito;
	int contadorDeCifrasDerecha=1;
	while(n>0){
		digito=n%10;
		n=n/10;
		if(digito%3==0) {
			//Si el dígito di es un múltiplo de 3, se le suma 6 y 
			//se calcula el resto de 10.
			digito=digito+6;
			digito=digito%10;
		}
	else	if(digito%5==0){
			// Si el dígito di es un múltiplo de 5, se le suma 5 y 
			//se calcula el resto de 10.*/
			digito=digito+5;
			digito=digito%10;
			
		}
		
		nuevaN=nuevaN+digito*pow(10,contadorDeCifrasDerecha-1);
		contadorDeCifrasDerecha++;
	}
	cout << nuevaN;
	
	return 0;
}
