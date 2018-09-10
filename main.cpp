
#include "Nodo.h"


int main() {

	int size;
	Node* root = 0;

	cout << "Ingrese el tamano de la lista: ";
	cin >> size;

	root = UtilidadesListaEnlazada::crearLista(size);

	UtilidadesListaEnlazada::imprimir(root);

	system("pause");

}