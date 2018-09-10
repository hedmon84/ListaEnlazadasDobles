#include "Nodo.h"

void  UtilidadesListaEnlazada::insertar(Node *&root, const char* value) {

	Node *newNode = new Node();
	newNode->name = _strdup(value);
	newNode->next = 0;
	newNode->prev = 0;

	if (root == 0) {
		root = newNode;
		return;
	}
	else
	{

		Node *tmp = root;
		Node *helper = 0;

		while (tmp != 0) {


			int i = strcmp(value, tmp->name);

			if (i < 0) {

				if (helper != 0)
					helper->next = newNode;
				else {

					newNode->next = root;
					root = newNode;

					return;
				}

				newNode->next = tmp;
				tmp = newNode;
				tmp->prev = newNode;

				return;
			}

			helper = tmp;
			tmp = tmp->next;
		}
		helper->next = newNode;
		tmp = newNode;
		newNode->prev = helper;
		return;
	}


}

void UtilidadesListaEnlazada::imprimir(Node *&root) {

	cout << "\nImprimiendo Lista\n";

	Node *tmp = root;

	while (tmp != 0) {

		cout << tmp->name << " ";

		tmp = tmp->next;
	}

	cout << endl;
}

Node* UtilidadesListaEnlazada::crearLista(int size) {

	string nombre;
	Node* root = 0;

	for (int i = 0; i < size; i++) {

		cout << "Ingrese nombre: ";
		cin >> nombre;
		insertar(root, nombre.c_str());

	}

	return root;
}


