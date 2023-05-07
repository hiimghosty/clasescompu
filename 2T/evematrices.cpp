#include <iostream>

using namespace std;

int main()
{
    int A[] = {3, 2, 1};
    int B[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};
     //numero de filas
     int m = 2;
     //numero de columnas
     int n = 4;
    for (int i = 0; i < m; i++){
        for (int j=0; j < n; j++){
            cout << B[i][j] <<" ";
        }
        cout << endl;
    }

        return 0;
}