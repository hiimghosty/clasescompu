#include <iostream>

int charArrayAInt(char* array) {
    int resultado = 0;
    int signo = 1;

    // Manejar el signo negativo
    if (array[0] == '-') {
        signo = -1;
        ++array; // Saltar el signo negativo
    }

    // Convertir cada carácter a dígito y construir el número entero
    while (*array != '\0') {
        resultado = resultado * 10 + (*array - '0');
        ++array;
    }

    return resultado * signo;
}

int main() {
    using namespace std;

    char array[] = "-12345"; // Array de caracteres

    // Convertir el array de char a int
    int numero = charArrayAInt(array);

    // Imprimir el número entero convertido
    cout << "Número entero: " << numero << endl;

    return 0;
}
