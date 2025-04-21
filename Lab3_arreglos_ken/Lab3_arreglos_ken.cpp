#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numeros[10];

	for (int i = 0; i <= 9; i++) {
		cout << "Escribe un numero para la posicion " << i + 1 << endl;
		cin >> numeros[i];
	}

	cout << endl << "Los numeros ingresados son: " << endl;

	for (int i = 0; i <= 9; i++) {
		cout << numeros[i] << endl;
	}

	return 0;
}
