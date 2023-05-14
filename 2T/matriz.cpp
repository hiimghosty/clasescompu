#include <iostream>
#include <cstdlib>
using namespace std;
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
int main()
{
    int m, n;
    cout << "Introducir cantidad de filas" << endl;
    cin >> m;
    cout << "Introducir cantidad de columnas" << endl;
    cin >> n;

    int A[m][n]; // m y n deben existir antes de declarar mi matriz, y deben valer algo
    
    //Cargar numeros aleatorios
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0 + rand() % (10 - 0 + 1); // enteros entre 0 y 10
        }
    }
    //Imprimr la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
            
        }
        cout << endl;
    }
    return 0;
}