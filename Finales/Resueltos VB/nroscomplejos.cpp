/*1) Escribir un programa que permita hacer las operaciones de suma, resta, multiplicación y división
de números complejos. El tipo complejo ha de definirse como una estructura. DEFINIR FUNCIONES
PARA CADA OPERACIÓN.
struct Complejo {
float r; //parte real
float i; //parte imaginaria
}*/

#include<iostream>
using namespace std; 

struct Complejo
{
	float r;
	float i;
};

Complejo cargar()
{
	Complejo complejos;
	cout<<"Ingrese parte real: ";
	cin>>complejos.r;
	cout<<"Ingrese parte imagaginaria: ";
	cin>>complejos.i;
	
	return complejos;
}

void resta(Complejo complejo[2])
{
	float restareal=0;
	float restaimaginaria=0;
	restareal=complejo[0].r-complejo[1].r;
	restaimaginaria=complejo[0].i-complejo[1].i;
	
	cout<<"La resta es: "<<restareal;
	
	if(restaimaginaria>=0)
	{
		cout<<"+";
	}
	
	cout<<restaimaginaria<<"i";
}

void multiplicacion(Complejo complejo[2])
{
	float multreal;
	float multcomplejo;
	float multryi;
	float suma;
	
	multreal=complejo[0].r*complejo[1].r;
	multcomplejo=(complejo[0].i*complejo[1].i)*-1;
	multryi=complejo[0].i*complejo[1].r+complejo[1].i*complejo[0].r;
	
	suma=multreal+multcomplejo;
	
	cout<<"La multiplicacion es: "<<suma;
	
	if(multryi>=0)
	{
		cout<<"+";
	}
	
	cout<<multryi<<"i";
}

void division(Complejo complejo[2])
{
	float division1, division2;
	float multreal1;
	float multcomplejo1;
	float multryi1;
	float suma1;
	float multreal2;
	float multcomplejo2;
	float multryi2;
	float suma2;
	
	multreal1=complejo[0].r*complejo[1].r;
	multcomplejo1=(complejo[0].i*complejo[1].i)*-1;
	multryi1=complejo[0].i*complejo[1].r+complejo[1].i*complejo[0].r;
	
	suma1=multreal1+multcomplejo1;
	
	multreal2=complejo[1].r*complejo[1].r;
	multcomplejo2=(complejo[1].i*(-complejo[1].i))*-1;
	multryi2=complejo[1].i*complejo[1].r+(-complejo[1].i*complejo[1].r);
	
	suma2=multreal2+multcomplejo2+multryi2;
	
	cout<<"La division es: "<<endl<<suma1;
	if(multryi1>=0)
	{
		cout<<"+";
	}
	
	cout<<multryi1<<"i"<<"/"<<suma2;
	
}

void suma(Complejo complejo[2])
{
	float sumareal=0;
	float sumaimaginaria=0;
	sumareal=complejo[0].r+complejo[1].r;
	sumaimaginaria=complejo[0].i+complejo[1].i;
	
	cout<<"La suma es: "<<sumareal;
	
	if(sumaimaginaria>=0)
	{
		cout<<"+";
	}
	
	cout<<sumaimaginaria<<"i";
}

int main()
{
	Complejo complejo[2];
	for(int i=0; i<2; i++)
	{
		complejo[i]=cargar();
	}
	suma(complejo);
	cout<<endl;
	resta(complejo);
	cout<<endl;
	multiplicacion(complejo);
	cout<<endl;
	division(complejo);
}
