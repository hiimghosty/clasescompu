#include<iostream>
#include<math.h>
using namespace std;
/* Escriba un programa en C++ en el que se ingrese por teclado un número entero (n), 
mayor que 1.00, menor
que 10.000.00 (validar). Dicho programa debe determinar la cantidad de dígitos del número (nc), a
continuación se extraen los dígitos (di) para generar un nuevo número cifrado con el 
siguiente criterio:
• Si el dígito di es un múltiplo de 3, se le suma 6 y se calcula el resto de 10.
• Si el dígito di es un múltiplo de 5, se le suma 5 y se calcula el resto de 10.*/
//4356
int validar(){
	float n;
	do{
		cout << "Introducir un numero mayor a 100 y menor a 1000000 ";
		cin>>n;
	}while(int(n)!=n or n<0 or n>1000000 or n<100);
	return n;
}
int num_c(int x){
	int cifras=0;
	while(x>0){
				x=x/10;
				cifras++;
	}
	
	return cifras;
}
int codificacion(int n){
	int digito;
	int numeroCodificado=0;
	int contadorCifraDerecha=1;
	while(n>0){
/* 
• Si el dígito di es un múltiplo de 3, se le suma 6 y se calcula el resto de 10.
• Si el dígito di es un múltiplo de 5, se le suma 5 y se calcula el resto de 10.*/
		digito=n%10;
		if(digito>0 and digito%3==0){
			digito=digito+6;
			digito=digito%10;
		}
		else if(digito>0 and digito%5==0){
			digito=digito+5;
			digito=digito%10;
			
		}
		numeroCodificado=numeroCodificado+digito*pow(10,(contadorCifraDerecha-1));
		contadorCifraDerecha++;
		n=n/10;
	}
	return numeroCodificado;
}
int main(){
	int n;
	int numeroCodificado;
	n=validar();
	cout << "El numero original es " <<n<<endl;
	int nc;
	nc=num_c(n);
	cout << "El numero de cifras es:"<<nc<<endl;
	numeroCodificado=codificacion(n);
	cout <<"El numero codificado es: "<<numeroCodificado;
	return 0;
}
