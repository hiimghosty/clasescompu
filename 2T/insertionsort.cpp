#include <iostream>

using namespace std;

void imprimirVector(int N[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        cout << N[i] << " ";
    }
}

void insertionSort(int N[], int tam){
    for (int i = 1; i < tam; i++){
        int llave = N[i];
        int j = i-1;
        while (j>=0 && N[j] > llave){
            N[j+1] = N[j];
            j--;
        }
        N[j+1] = llave;
    }
}

int main(){
    int N[] = {288, 300 , 9, 67, 34, 2};
    int tamanho = 6;

    insertionSort(N,tamanho);
    imprimirVector(N,tamanho);
    return 0;
}