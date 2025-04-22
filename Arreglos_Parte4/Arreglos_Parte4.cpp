#include <iostream>
using namespace std;

const int TAM = 15;

void ingresarNumeros(int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Escribe un numero para la posicion " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

double calcularPromedio(const int arreglo[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arreglo[i];
    }
    return suma / tam;
}

int filtrarMayores(const int arreglo[], int tam, double promedio, int arreglo2[]) {
    int count = 0;
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] > promedio) {
            arreglo2[count++] = arreglo[i];
        }
    }
    return count;
}

void imprimirArreglo(const int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

void ordenarDescendente(int arreglo[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (arreglo[j] < arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}



int main() {
    int numeros[TAM];
    ingresarNumeros(numeros, TAM);

    double promedio = calcularPromedio(numeros, TAM);

    int mayores[TAM];
    int tamMayores = filtrarMayores(numeros, TAM, promedio, mayores);

    cout << endl;
    cout << "Arreglo original:" << endl;
    imprimirArreglo(numeros, TAM);

    cout << endl;
    cout << "Promedio: " << promedio << endl;

    cout << endl;
    cout << "Valores mayores al promedio:" << endl;
    imprimirArreglo(mayores, tamMayores);

    ordenarDescendente(mayores, tamMayores);
    cout << endl;
    cout << "Valores mayores al promedio (ordenados de mayor a menor):" << endl;
    imprimirArreglo(mayores, tamMayores);

    return 0;
}