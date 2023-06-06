#include <iostream>

using namespace std;

void ordenar(int* arr, int n) {
    int i, j;

    for (i = 1; i < n; i++) {
        int temp = *(arr + i);

        for (j = i - 1; j >= 0; j--) {
            if (*(arr + j) > temp) {
                *(arr + j + 1) = *(arr + j);
            } else {
                break;
            }
        }

        *(arr + j + 1) = temp;
    }
}

int validar() {
    float x;
    do {
        cout << "Ingrese un número entero y positivo: ";
        cin >> x;
    } while (int(x) != x || x <= 0);
    return x;
}

int generarNumeroAleatorio(int limiteInferior, int limiteSuperior) {
    return limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);
}

void cargarVector(int A[], int tam, int a, int b) {
    for (int i = 0; i < tam; i++) {
        A[i] = generarNumeroAleatorio(a, b);
    }
}

void imprimirVector(int A[], int N) {
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
}

void contarDigitos(int arr[], int tam) {
    int frecuencia[10] = {0};

    for (int i = 0; i < tam; i++) {
        int numero = arr[i];

        while (numero != 0) {
            int digito = numero % 10;
            frecuencia[digito]++;
            numero = numero / 10;
        }
    }

    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        if (frecuencia[i] > 0) {
            cout << "Frecuencia del dígito " << i << ": " << frecuencia[i] << endl;
        }
    }
}

int main() {
    int a, b, m;
    cout << "Ingrese el valor de a: ";
    a = validar();
    cout << "Ingrese el valor de b: ";
    b = validar();
    cout << "Ingrese el tamaño del vector: ";
    m = validar();

    int vector[m];
    cargarVector(vector, m, a, b);

    cout << "El vector original es: " << endl;
    imprimirVector(vector, m);
    cout << endl;

    cout << "El vector ordenado es: " << endl;
    int* pt = &vector[0];
    ordenar(pt, m);
    imprimirVector(vector, m);

    contarDigitos(vector, m);

    return 0;
}
