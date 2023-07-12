#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4};
    int *pt = &A[0];
    for (int i = 0; i < 4; i++)
    {
        cout << *(pt + i) << " ";
    }

    return 0;
}