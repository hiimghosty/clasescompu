#include <iostream>
using namespace std;
void selectionSort(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int aux = v[i];
            v[i] = v[minIndex];
            v[minIndex] = aux;
        }
    }
}

void printArray(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int v[] = {64, 25, 12, 22, 11};
    int n = sizeof(v) / sizeof(v[0]);

    cout << "Array antes de la ordenación: ";
    printArray(v, n);

    selectionSort(v, n);

    cout << "Array después de la ordenación: ";
    printArray(v, n);

    return 0;
}
