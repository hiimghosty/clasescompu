#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*int enterosAleatorios(){
    //Funcion que retorna numeros aleatorios del 0 al 30
    int x = 0 + rand()%(30-0+1);
    //limite inferior + rand()%(limitesuperior-limiteinferior+1)
    return x;
}*/

void imprimirVector(int N[])
{

    for (int i = 0; i < 10; i++)
    {
        cout << N[i] << " ";
    }
}

void ordenarVector(int N[]){
    for (int i=0; i<10; i+=2){
        for(int j=i+2; j<10; j+=2){
            if(N[i] < N[j]){
                int aux = N[i];
                N[i] = N[j];
                N[j] = aux;
            }
        }
    }
}
int main(){
    /* . Generar un vector de 10 elementos enteros aleatorios entre 0 y 30, 
    mostrar en pantalla el vector
generado, luego ordenar los elementos ubicados en posiciones pares de manera 
descendente, los
elementos que no estén en posiciones pares no cambiaran de lugar, al finalizar el ordenamiento
volver a mostrar el vector*/
    srand(time(NULL));
    int N[] = {23,25,21,16,29,3,23,12,16,28};
   /* for (int i = 0; i<10; i++){
        N[i] = enterosAleatorios();
    }*/
    cout << "El vector antes de ordenar es: " << endl;
    imprimirVector(N);
    ordenarVector(N);
    cout << "El vector ordenado es: " <<endl;
    imprimirVector(N);
    

    return 0;
}