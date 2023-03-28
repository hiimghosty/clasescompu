#include<iostream>
#include<math.h>
using namespace std;
int cantDig(int c){  //dtermina cantidad digitos
    int cont=0;
    while(c>0){
        cont++;
        c=c/10;
    } return cont;
}
int mostrarA(int numero){
 //extrae numeros de derecha a izquierda
 	int numInvertido=0;
 	int digito;
 	int numDigitos;
 	numDigitos=cantDig(numero);
	while(numero>0){
		digito=numero%10;
		numInvertido=numInvertido+digito*pow(10,(numDigitos-1));
		numDigitos--;
		numero=numero/10;
	}
	return numInvertido;
}
int main(){
	int i=1000;
	int numerosImpresos=1;
	do{
		if(i==mostrarA(i)){
			cout<<numerosImpresos<<": "<<i<<endl;
			numerosImpresos++;
		}
		i++;
	} while(numerosImpresos<50);
	cin>>i;
	return 0;
}
