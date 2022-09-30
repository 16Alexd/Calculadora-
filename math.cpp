#include "Math.h"
#include <math.h>
using namespace std;
#include <iostream>

void Math::matriz(int cA, int cB, int fA, int fB)
{
	int matrizA[30][30];
	int matrizB[30][30];
	int matrizR[30][30];

	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cA; j++) {
			cout << "Ingrese el elmento " << i << "," << j << " de la primera matriz: ";
			cin >> matrizA[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < fB; i++) {
		for (int j = 0; j < cB; j++) {
			cout << "Ingrese el elmento " << i << "," << j << " de la segunda matriz: ";
			cin >> matrizB[i][j];
		}
	}

	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cB; j++)
		{
			matrizR[i][j] = 0;
		}
	}

	// Multiplicacion
	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cB; j++)
		{
			for (int z = 0; z < cA; z++) {
				matrizR[i][j] = matrizR[i][j] + matrizA[i][z] * matrizB[z][j];
			}
		}
	}

	cout << "El resultado es...\n";

	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cB; j++) {
			cout << matrizR[i][j] << "\t";
		}
		cout << endl;
	}
}

void Math::calSen(float seno)
{
	int factorial;
	float resultado;
	seno = seno * pi / 180;

	resultado = 0;

	for (int i = 0; i < 5; i++) {
		factorial = 1;
		for (int j = 1; j <= (2 * i + 1); j++)
		{
			factorial *= j;
		}
		resultado += pow(-1, i) * pow(seno, 2 * i + 1) / factorial;
	}
	cout << "El seno es: " << resultado << endl;;
}

void Math::calCos(float cos)
{
	int factorial;
	float resultado;
	cos = cos * pi / 180;

	resultado = 0;

	for (int i = 0; i < 5; i++) {
		factorial = 1;
		for (int j = 1; j <= (2 * i); j++)
		{
			factorial *= j;
		}
		resultado += pow(-1, i) * pow(cos, 2 * i) / factorial;
	}
	cout << "El coseno es: " << resultado << endl;;
}

void Math::calTan(float tangente)
{
	tangente = tangente * pi / 180;
	cout << "La tangente es: " << tan(tangente) << endl;
}
