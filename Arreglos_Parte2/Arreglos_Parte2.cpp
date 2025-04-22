#include <iostream>
using namespace std;
const int TAM = 10;

void IngresarNumeros(int arreglo[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << endl << "Escribe un numero para la posicion " << i + 1 << endl;
		cin >> arreglo[i];
	}
}

int Suma(const int arreglo[], int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++) {
		suma += arreglo[i];
	}
	return suma;
}

double Promedio(const int arreglo[], int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++) {
		suma += arreglo[i];
	}
	return suma/tam;
}

int Max(const int arreglo[], int tam) {
	int max = arreglo[0];
	for (int i = 0; i < tam; i++) {
		if (arreglo[i] > max) {
			max = arreglo[i];
		}
	}
	return max;
}

int Min(const int arreglo[], int tam) {
	int min = arreglo[0];
	for (int i = 0; i < tam; i++) {
		if (arreglo[i] < min) {
			min = arreglo[i];
		}
	}
	return min;
}

int Pares(const int arreglo[], int tam) {
	int pares = 0;
	for (int i = 0; i < tam; i++) {
		if (arreglo[i] % 2 == 0) {
			++pares;
		}
	}
	return pares;
}

int Impares(const int arreglo[], int tam) {
	int impares = 0;
	for (int i = 0; i < tam; i++) {
		if (arreglo[i] % 2 != 0) {
			++impares;
		}
	}
	return impares;
}

int main()
{
	int numeros[TAM];

	IngresarNumeros(numeros, TAM);

	cout << endl << "La suma total de los numeros es: " << Suma(numeros, TAM) << endl;
	cout << endl << "El promedio de los numeros es: " << Promedio(numeros, TAM) << endl;
	cout << endl << "El valor maximo es: " << Max(numeros, TAM) << endl;
	cout << endl << "El valor minimo es: "<< Min(numeros, TAM) << endl;
	cout << endl << "La cantidad de numeros pares es: " << Pares(numeros, TAM) << endl;
	cout << endl << "La cantidad de numeros impares es:	" << Impares(numeros, TAM) << endl;

	return 0;
}