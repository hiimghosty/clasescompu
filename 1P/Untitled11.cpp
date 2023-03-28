#include<iostream>
#include<math.h>
using namespace std;
/* Lea un número entero y positivo N y otro entero y positivo de un dígito P (validarambos) 
del número entero N eliminar la posición del dígito indicado por P (Ejemplo:
N = 52647; P = 2; resultado 5267).*/
int validarN(){
	float n;
	do{
		cout << "Introducir N entero y positivo"<<endl;
		cin>> n;
	} while(int(n)!=n or n<0);
	return n;
}
int validarP(){
	float n;
	do{
		cout << "Introducir P entero y positivo"<<endl;
		cin>> n;
	} while(int(n)!=n or n<0 or n>=10);
	return n;
}
int main(){
	int n,p;
	n=validarN();
	p=validarP();
	int d;
	int nuevaN=0;
	int cifraDerecha=1;
	while(n>0){
		d=n%10;
		if(cifraDerecha<p) nuevaN=nuevaN+d*pow(10,(cifraDerecha-1));
		if (cifraDerecha>p) nuevaN=nuevaN+d*pow(10,(cifraDerecha-2));
		cifraDerecha++;
		n=n/10;
	}
	cout <<endl<<"Numero reconstruido "<<nuevaN;
	
	return 0;
}
