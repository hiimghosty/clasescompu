#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    /*Cree una función que tome un entero positivo entre 1 y 3999 (ambos incluidos)
    como su parámetro y devuelva una cadena que contenga la representación en números
    romanos de ese entero.

    Los números romanos modernos se escriben expresando cada dígito por separado,
    comenzando con el dígito más a la izquierda y omitiendo cualquier dígito con un
    valor de cero. En números romanos, 1990 se representa: 1000=M, 900=CM, 90=XC;
    resultando en MCMXC. 2008 se escribe como 2000=MM, 8=VIII; o MMVIII. 1666
    utiliza cada símbolo romano en orden descendente: MDCLXVI.*/

    /*Simbolo    Valor
    I          1
    V          5
    X          10
    L          50
    C          100
    D          500
    M          1,000*/
    char M[3] = "M";
    char CM[3] = "CM";
    char D[3] = "D";
    char CD[3] = "CD";
    char C[3] = "C";
    char XC[3] = "XC";
    char L[3] = "L";
    char XL[3] = "XL";
    char X[3] = "X";
    char IX[3] = "IX";
    char V[3] = "V";
    char IV[3] = "IV";
    char I[2] = "I";

    char numeroRomano[50] = {" "};
    int numeroArabigo;
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    cout << "Introducir numero";
    cin >> numeroArabigo;
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    int indice = 0;
    for (int i = 0; i < tamanho; i++)
    {
        while (numeroArabigo >= valores[i])
        {
            numeroArabigo -= valores[i];
            if (valores[i] == 1000)
            {
                strcat(numeroRomano, M);
            };
            if (valores[i] == 900)
            {
                strcat(numeroRomano, CM);
            };
            if (valores[i] == 500)
            {
                strcat(numeroRomano, D);
            };
            if (valores[i] == 400)
            {
                strcat(numeroRomano, CD);
            };
            if (valores[i] == 100)
            {
                strcat(numeroRomano, C);
            };
            if (valores[i] == 90)
            {
                strcat(numeroRomano, XC);
            };
            if (valores[i] == 50)
            {
                strcat(numeroRomano, L);
            };
            if (valores[i] == 40)
            {
                strcat(numeroRomano, XL);
            };
            if (valores[i] == 10)
            {
                strcat(numeroRomano, X);
            };
            if (valores[i] == 9)
            {
                strcat(numeroRomano, IX);
            };
            if (valores[i] == 5)
            {
                strcat(numeroRomano, V);
            };
            if (valores[i] == 4)
            {
                strcat(numeroRomano, IV);
            };
            if (valores[i] == 1)
            {
                strcat(numeroRomano, I);
            };
        }
    }
    cout << "El numero romano es:" << endl;
    cout << numeroRomano;
    return 0;
}

//MDCCLVIII