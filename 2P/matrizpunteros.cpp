#include <iostream>
using namespace std;

void cargaDeMatriz(int *pt, int m, int n)
{
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>*(pt+i*m+j);
        }
    }
}

void imprimirMatriz(int *pt, int m, int n)
{
    int cantElementos = m * n;
    for (int i = 0; i < cantElementos; i++)
    {
        cout << *(pt + i) << " ";
        if ((i + 1) % n == 0)
        {
            cout << endl;
        }
    }
}
int main()
{
    int m, n;
    cout << "introducir cantidad de filas" << endl;
    cin >> m;
    cout << "introducir cantidad de columnas" << endl;
    cin >> n;
    int A[m][n];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, m, n);
    imprimirMatriz(pt,m,n);
    return 0;
}