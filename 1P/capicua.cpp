//determine e imprima los 50 primeros numeros capicuas consecutivos mayores que 1000
//prueba nueva pc
#include <math.h>
using namespace std;

int cantDig(int c){  //dtermina cantidad digitos
    int cont=0;
    while(c>0){
        cont++;
        c=c/10;
    } return cont;
}

//holaaaa
int mostrarA(int numero){
 //devuelve el numeros de derecha a izquierda
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
	//devuelve el numero invertido
	return numInvertido;
}



/* Esta funcion no tiene proposito, es simplemente el numero original
int mostrarB(int e){  //muestra numeros de izquierda a dercha
    int u;
    for(int j=cantDig(e)-1;j>=0;j--){
        u=e/int((pow(10,j)));
        //cout<<u;
        e=e%int((pow(10,j)));
    } 
	cout <<" ";
	return u;
}
*/

void generacionDeN(){ //generacion y comparacion de numeros
    int numerosImpresos=1;
    for(int i=1001;i<10000;i++){
    	//le mandamos i porque i es el numero leido normalmente(der a izq)
        if(i==mostrarA(i)){
		cout<<numerosImpresos<<": "<<i<<endl;
        numerosImpresos++;}
    if(numerosImpresos==51) break;
}
}
int main(){
    generacionDeN();
    return 0;
}

