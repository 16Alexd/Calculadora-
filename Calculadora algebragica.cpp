
#include <iostream>
#include "Math.h"
using namespace std;

int main()
{
	int op, columnasA, filasA, filasB, columnasB, seno, coseno, tangente;
	Math* math = new Math();

	cout << "bienvenido a la calculadora algebraica" << endl;
	do {
		cout << "Que desea hacer?" << endl;
		cout << "1. Calcular seno" << endl;
		cout << "2. Calcular coseno" << endl;
		cout << "3. Calcular tangente" << endl;
		cout << "4. Multiplicar matrices" << endl;
		cout << "5. presione 666 para salir" << endl;
		cout << "Digite su opcion: ";
		cin >> op;

		switch (op)
		{
		case 1:
			cout << "Digite un angulo (en grados): ";
			cin >> seno;
			math->calSen(seno);
			break;
		case 2:
			cout << "Digite un angulo (en grados): ";
			cin >> coseno;
			math->calCos(coseno);
			break;
		case 3:
			cout << "Digite un angulo (en grados): ";
			cin >> tangente;
			math->calTan(tangente);

			break;
		case 4:
			cout << "Ingrese el numero de filas de la matriz " << "A" << " : ";
			cin >> filasA;
			cout << "Ingrese el numero de columnas de la matriz " << "A" << " : ";
			cin >> columnasA;
			cout << "Ingrese el numero de filas de la matriz " << "B" << " : ";
			cin >> filasB;
			cout << "Ingrese el numero de columnas de la matriz " << "B" << " : ";
			cin >> columnasB;

			if (columnasA == filasB) {
				math->matriz(filasA, columnasA,filasB, columnasB);
			}
			else {
				cout << "Esta matriz no se pueden multiplicar\n";
			}

			break;
		case 5: 
			cout << "finalizacion de la calculadora";


			break;
		default:
			break;
		}

	} while (op != 666);



}

