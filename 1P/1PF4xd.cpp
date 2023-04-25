#include<iostream>
using namespace std;
//hola
int validarDia(){
	int dia;
	do{
		cout << "Dia:(Entre 1 y 31)"<<endl;
		cin>>dia;
	} while(dia<1 or dia>31);
}

int validarMes(){
	int mes;
		do{
		cout << "Mes:(Entre 1 y 12)"<<endl;
		cin>>mes;
	} while(mes<1 or mes>12);
}

int introducirAnho(){
	int anho;
	cout<<"Anho: "<<endl;
	cin>>anho;
	return anho;
}

int sumaDeFecha(int d, int m, int a){
	return d+m+a;
}

int sumarDigitos(int n) {
    int suma=0;
    while (true) {
        while (n>0) {
            suma += n%10;
            n =n/10;
        }
        if (suma >= 1 and suma <= 11) {
            return suma;
        }
        n=suma;
        suma=0;
    }
}

int main(){
	int dia, mes,anho,suma=0,numeroDeJugador;
	dia=validarDia();
	mes=validarMes();
	anho=introducirAnho();
	cout<<"La fecha de nacimiento es:";
	
	if(dia < 10) {
        cout << "0";
    }
    cout << dia << "/";

    if(mes < 10) {
        cout << "0";
    }
    cout << mes << "/" << anho<<endl;
    suma=sumaDeFecha(dia,mes,anho);
	numeroDeJugador=sumarDigitos(suma);
	cout<<"El numero de Jugador es: "<<numeroDeJugador;
    
	return 0;
}
