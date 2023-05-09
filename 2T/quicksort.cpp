#include <iostream>
using namespace std;

void quicksort(int vector[], int inferior, int superior) {
    if (inferior < superior) {
        int pivot = vector[superior];
        int izq = inferior;
        int der = superior - 1;

        while (izq <= der) {
            while (izq <= der && vector[izq] < pivot) {
                izq++;
            }
            while (izq <= der && vector[der] > pivot) {
                der--;
            }
            if (izq <= der) {
                int aux = vector[izq];
                vector[izq] = vector[der];
                vector[der] = aux;
                izq++;
                der--;
            }
        }
        // Coloca el pivote en la posición correcta
        int aux = vector[izq];
        vector[izq] = vector[superior];
        vector[superior] = aux;

        // Aplica Quicksort a los subvectoreglos izq y derecho si tienen más de un elemento
        if (izq - 1 > inferior) {
            quicksort(vector, inferior, izq - 1);
        }
        if (der + 1 < superior) {
            quicksort(vector, der + 1, superior);
        }
    }
}




int main(){
    int A[] = {7, -2, 4, 1, 6, 5, 0, -4, 2 };
    int tam = sizeof(A) / sizeof(A[0]);
    cout << "El vector sin oredenar es: " << endl;
    impresionDeVector(A,tam);
    quicksort(A,0,tam);
    cout << "El vector ordenado es: " << endl;
    impresionDeVector(A,tam);
    return 0;
}





