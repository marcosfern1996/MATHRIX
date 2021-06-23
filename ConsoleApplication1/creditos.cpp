#include <iostream>
#include <cstring>
#include "rlutil.h"
#include "funcionesJuego.h"

using namespace std;
using namespace rlutil;

void mmenu() {
	setBackgroundColor(GREY);
	setColor(BLACK);
	int menu;
	do {
		cls();
		locate(35, 7);
		cout << "MATHRIX";
		locate(15, 8);
		cout << "--------------------------------------------------";
		locate(21, 9);
		cout << "1 - Partida.";
		locate(21,10);
		cout << "2 - Estadisticas.";
		locate(21, 11);
		cout << "3 - Creditos.";
		locate(15, 12);
		cout << "--------------------------------------------------";
		locate(35, 13);
		cout << "0 - SALIR";
		cout << endl;
		locate(35, 14);
		cin >> menu;

		switch (menu)
		{
		case 1: partida();
			break;
		case 2: estadisticas(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,NULL, NULL);
			break;
		case 3: creditos();
			break;
		case 0:exit(-1);
			break;
		default:
			break;
		}
	} while (menu < 0 || menu > 3);
}


void creditos() {
	setBackgroundColor(GREEN);
	int n = 0;
	do {
		cls();
		locate(20, 5);
		cout << "Creado Por:";
		locate(20, 6);
		cout << "Fernandez Marcos";
		locate(20, 7);
		cout << "Escalante Juan Cruz";
		locate(20, 8);
		cout << "Nestares Florencia";
		locate(20, 9);
		cout << "Almada Mauricio";
		locate(19, 10);
		cout << "----------------------------";
		locate(21, 14);
		cout<<"0 - menu Principal"; 
		locate(22, 15);
		cin >> n;
		if (n == 0) {
			mmenu();
		}
	} while (n != 0);

}
