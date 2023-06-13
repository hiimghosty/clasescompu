#include <iostream>
#include <cstring>

#define MAX_CARACTERES 100
#define FILAS 10
#define COLUMNAS 10

bool validarClave(const char* clave) {
    // Verificar que la clave tenga 10 dígitos distintos
    bool digitos[10] = {false};
    for (int i = 0; i < 10; i++) {
        int digito = clave[i] - '0';
        if (digito < 0 || digito > 9 || digitos[digito]) {
            return false;
        }
        digitos[digito] = true;
    }
    
    // Verificar que los dígitos no estén en orden ascendente
    for (int i = 0; i < 9; i++) {
        if (clave[i] >= clave[i + 1]) {
            return false;
        }
    }
    
    return true;
}

void codificar(char* mensajeOriginal, char* mensajeCodificado) {
    char clave[11];
    bool claveValida = false;
    
    // Pedir la clave y validar
    while (!claveValida) {
        std::cout << "Introduce una clave de 10 dígitos distintos (entre 0 y 9): ";
        std::cin.getline(clave, 11);
        
        claveValida = validarClave(clave);
        
        if (!claveValida) {
            std::cout << "La clave ingresada no es válida. Intenta nuevamente." << std::endl;
        }
    }
    
    // Completar el mensaje original con asteriscos si es necesario
    int longitud = strlen(mensajeOriginal);
    if (longitud < MAX_CARACTERES) {
        std::strcpy(mensajeCodificado, mensajeOriginal);
        for (int i = longitud; i < MAX_CARACTERES; i++) {
            mensajeCodificado[i] = '*';
        }
        mensajeCodificado[MAX_CARACTERES] = '\0';
    } else {
        std::strcpy(mensajeCodificado, mensajeOriginal);
    }
    
    // Crear la matriz
    char matriz[FILAS][COLUMNAS];
    int indice = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = mensajeCodificado[indice++];
        }
    }
    
    // Codificar el mensaje
    indice = 0;
    for (int i = 0; i < 10; i++) {
        int columna = clave[i] - '0';
        for (int j = 0; j < FILAS; j++) {
            mensajeCodificado[indice++] = matriz[j][columna];
        }
    }
    
    // Agregar la clave al final del mensaje codificado
    std::strcpy(&mensajeCodificado[MAX_CARACTERES], clave);
}

int main() {
    char mensajeOriginal[] = "LA CRIPTOGRAFIA ES LA CIENCIA DE CIFRAR Y DESCIFRAR MENSAJES USANDO TECNICAS MATEMATICAS";
    char mensajeCodificado[MAX_CARACTERES + 11]; // +11 para
    return 0;
}