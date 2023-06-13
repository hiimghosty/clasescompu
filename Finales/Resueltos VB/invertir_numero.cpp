/*3) Implemente una función para invertir un número entero introducido por teclado (pero leído como
cadena). Considerar también el caso de los números negativos, y además proponer otra solución
empleando la noción de punteros.*/

#include<iostream>
using namespace std;

int cadenaAentero(char cad[], int n)
{
	int i=0, n1=0;
	while(cad[i]!='\0')
	{
		n1=n1*10+(cad[i]-'0');
		
		i++;
	}
	
	return n1;
}

/*int invertir_numero(int n1)
{
	int numero=0;
	while(n1>0)
	{
		numero=numero*10+(n1%10);
		n1=n1/10;
		
	}
	
	return numero;
}*/

void enteroAcad(char cad[], int n, int n1)
{
	int i=0, dig=0;
	while(cad[i]!='\0')
	{
		dig=n1%10;
		n1=n1/10;
		
		cad[i]=dig+'0';
		i++;
	}
}



int main()
{
	int n, n1, numero;
	cout<<"Ingrese un numero entero y positivo n: ";
	cin>>n;
	char cad[n];
	cout<<"Ingrese un numero de n cifras: ";
	cin>>cad;
	n1=cadenaAentero(cad,n);
	enteroAcad(cad,n,n1);
	cout<<endl<<"El numero invertido es: ";
	cout<<cad;
	
	cout<<endl;
	return 0;
}
