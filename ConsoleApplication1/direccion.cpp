#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"

using namespace std;
using namespace rlutil;

int direccion( int fila, int columna) {

	int direccionCuenta;
	do {
		locate(1, 10);
		cout << "direccion: " << endl;
		locate(1, 11);
		cout << "4 - izquierda\n6 - derecha\n8 - arriba\n2 - abajo" << endl;
		cin >> direccionCuenta;
		switch (direccionCuenta)
		{
		case 4:direccionCuenta = 4;
			return direccionCuenta;
			break;
		case 6:direccionCuenta = 6;
			return direccionCuenta;
			break;
		case 2:direccionCuenta = 2;
			return direccionCuenta;
			break;
		case 8:direccionCuenta = 8;
			return direccionCuenta;
			break;
		default:
			break;
		}
	} while (direccionCuenta != 2 || direccionCuenta != 4 || direccionCuenta != 6 || direccionCuenta != 8);

}
