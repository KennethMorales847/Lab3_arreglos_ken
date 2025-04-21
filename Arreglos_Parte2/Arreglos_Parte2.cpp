#include <iostream>
using namespace std;
const int TAM = 10;

int IngresarNumeros(int arreglo[], int tam) {

}

int Suma(const int arreglo[], int tam) {

}

int Promedio(const int arreglo[], int tam) {

}

int Max(const int arreglo[], int tam) {

}

int Min(const int arreglo[], int tam) {

}

int Pares(const int arreglo[], int tam) {

}

int Imares(const int arreglo[], int tam) {

}

int main()
{
	int numeros[TAM];

	IngresarNumeros(numeros, TAM);

	cout << endl << "La suma total de los numeros es:" << endl;
	Suma(numeros, TAM);
	cout << endl << "El promedio de los numeros es:" << endl;
	Promedio(numeros, TAM);
	cout << endl << "El valor maximo es:" << endl;
	Max(numeros, TAM);
	cout << endl << "El valor minimo es:" << endl;
	Min(numeros, TAM);
	cout << endl << "La cantidad de numeros pares es:" << endl;
	Pares(numeros, TAM);
	cout << endl << "La cantidad de numeros impares es:" << endl;
	Imares(numeros, TAM);

	return 0;
}