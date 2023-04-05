#include<iostream>
using namespace std;
int main(){
	cout<<"Introduce un numero";
	float numero;
	cin>>numero;
	if(numero>10){
		cout<<"El numero es MAYOR a 10";
	}
	else if(numero<10) cout<<"El numero es MENOR  a 10 ";
	
	else cout<<"El numero es IGUAL a 10";
	//ELSE VA DESPUES DE UN IF SI O SI
	//EL ELSE ENTRA SOLO SI EL ANTERIOR IF NO SE CUMPLIO
	return 0;
}
