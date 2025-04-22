#include <iostream>
using namespace std;
const int TAM = 8;

void imprimirInverso(int* arr, int tam) {
	for (int i = tam - 1; i >= 0; i--) {
		cout << *(arr + i) << " ";
	}
}

int main()
{
	int numeros[TAM];

	cout << endl << "El orden normal del arreglo es: " << endl;

	for (int i = 0; i < TAM; i++) {
		numeros[i] = i+1;
		cout << numeros[i] << " ";
	}

	cout << endl << "El orden inverso del arreglo es: " << endl;

	imprimirInverso(numeros, TAM);

	return 0;
}