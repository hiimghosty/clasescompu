#include <iostream>
using namespace std;
int main()
{
    int segundos = 328;
    int minutos = segundos / 60;
    cout << minutos;
    segundos = segundos %60;
    cout << endl << segundos;
    return 0;
}