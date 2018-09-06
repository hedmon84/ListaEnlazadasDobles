
#include "Nodo.h"
int main() {

	char op = 0;
	bool stop = true;
	while (stop == true) {
		cout << "1.**Crear Lista**" << endl;
		cout << "2.**Imprimir Lista**" << endl;
		cout << "3.Salir" << endl;
		cin >> op;

		switch (op)
		{
		case '1':
			int x;
			cout << "Cantidad de Nombres que desea agregar?\n";
			cin >> x;
			UtilidadesListaEnlazada::crearLista(x);
			stop = true;
			break;
		case'2':
			UtilidadesListaEnlazada::imprimir(0);
			stop = true;
			break;
		case '3':
			stop = false;
			break;
		
		}
	}
}



