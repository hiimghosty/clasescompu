#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Esta funcion recibe el vector A, el tamanho N, y el numero X, devuelve las apariciones de X
int nroApariciones(int x, int A[],int N){
	int contador=0;
	for (int i=0 ; i<N; i++){
		if(x==A[i]) contador++;
	}
	
	return contador;
}

int enterosAleatorios(){
    //Funcion que retorna numeros aleatorios del 0 al 10
    int x = 0 + rand()%(10-0+1);
    //limite inferior + rand()%(limitesuperior-limiteinferior+1)
    return x;
}

void impresionDeVector(int vector[], int tam){
    for(int i=0; i<tam; i++){
        cout <<vector[i]<<" ";
    }

}

int elementoQueMenosAparece(int A[], int N){
	int menosAparece=A[0],aparicionesMenos=0,aparicionesAux=0;

	
	for (int i = 0 ; i<N; i++){
		// 20 40 45 40 20 3
		
		for(int j=0; j<N; j++){
			if(A[i]==A[j]) aparicionesAux++;
			
		}
		
		if(aparicionesAux<aparicionesMenos) {
			menosAparece = A[i];
			aparicionesMenos = aparicionesAux;
			
		}
		aparicionesAux = 0;
		
	}
	
	return menosAparece;
}
int main(){
	srand(time(NULL));
	//tamanho entero siempre
	int n,x,aparicionesx,menosAparece;
	
	cout << "Introducir el tamanho de A";
	cin >> n;
	
	int vector[n];
	
	for(int i=0; i<n; i++){
		vector[i] = enterosAleatorios();
	
	}
	
	impresionDeVector(vector,n);
	
	cout << "Introducir el numero que quieres cuantas veces aparece" <<endl;
	cin >> x;
	
	
	aparicionesx=nroApariciones(x,vector,n);
	cout << "Las apariciones de " << x << "son: " << aparicionesx;
	
	menosAparece = elementoQueMenosAparece(vector,n);
	cout << "El elemento que menos aparece es: " << menosAparece << endl;
	return 0;
}
