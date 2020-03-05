#include <iostream>
using namespace std;

const int MAXFILAS = 4;
const int MAXCOLUMNAS = 7;


int operacion(float vent[MAXFILAS][MAXCOLUMNAS], float promedio[4]);

void main() {
	setlocale(LC_CTYPE, "spanish");
	int i, dies;
	float ventas[MAXFILAS][MAXCOLUMNAS] = { {1001, 32.1, 1011.2,31.6, 50, 22.9,44.1}, {21.5,19.9,13.7,63.2,25.4,33.3,21.2},
	{40.3,43.3, 1010,20,30,40,10.3},{20,20,20,20,20,30,10} }, promedio[4];

	dies = operacion(ventas, promedio);

	for (i = 0; i < MAXFILAS; i++) {
		cout << "El valor medio de las ventas de la semana " << i + 1 << " és de: " << promedio[i] << endl;
	}
	cout << "En total hay " << dies << " dias que se superan los 1.000 euros." << endl;
	system("PAUSE");
}
int operacion(float venta[][MAXCOLUMNAS], float media[]) {
	int i, e, contador = 0;
	float totalventas = 0, VentasSemana;
	for (i = 0; i < MAXFILAS; i++) {
		VentasSemana = 0;
		for (e = 0; e < MAXCOLUMNAS; e++) {
			VentasSemana = venta[i][e] + VentasSemana;
			if (venta[i][e] > 1000) {
				cout << "Van superando los 1000 euros: " << venta[i][e] << endl;
				contador++;
			}
		}
		media[i] = VentasSemana / MAXCOLUMNAS;
	}
	return contador;
}
