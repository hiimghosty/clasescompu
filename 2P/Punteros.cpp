#include <iostream>
using namespace std;

void cargaDeMatriz(int *A, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(A + i * m + j);
        }
    }
}
int main()
{
    int m, n;
    cout << "Introducir numero de filas " << endl;
    cin >> m;
    cout << "Introducir numero de columnas" << endl;
    cin >> n;
    int A[m][n];
    int *pt = &A[0][0];
    cargaDeMatriz(pt, m, n);
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}