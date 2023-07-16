#include <iostream>
#include <string.h>
using namespace std;

char MorseaTexto(const char *morse)
{
    if (strcmp(morse, ".--.") == 0) return 'P';
    else if (strcmp(morse, "--..") == 0) return 'Z';
    else if (strcmp(morse, ".----") == 0) return '1';
    else if (strcmp(morse, "..---") == 0) return '2';
    else if (strcmp(morse, "...--") == 0) return '3';
    else if (strcmp(morse, "....-") == 0) return '4';
    else if (strcmp(morse, ".....") == 0) return '5';
    else if (strcmp(morse, "-....") == 0) return '6';
    else if (strcmp(morse, "--...") == 0) return '7';
    else if (strcmp(morse, "---..") == 0) return '8';
    else if (strcmp(morse, "----.") == 0) return '9';
    else if (strcmp(morse, "-----") == 0) return '0';
    else return 'X';
}

int main()
{
    cout << "Ingrese el mensaje: ";
    fflush(stdin);
    char morse[100];
    cin >> morse;
    char *p = strtok(morse, ";");

    while (p != NULL)
    {
        char letra = MorseaTexto(p);
        cout << letra;
        p = strtok(NULL, ";");
    }
    cout << endl;
    return 0;
}
