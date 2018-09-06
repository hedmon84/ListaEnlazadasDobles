#include "Nodo.h"

void UtilidadesListaEnlazada::Insertar(nodo **inicio, char *n)
{




	nodo* nuevo = new nodo;
	nuevo->name = new char[strlen(n)];
	strcpy_s(nuevo->name, strlen(n) + 1, n);
	nuevo->next = 0;
	nuevo->prev = 0;

	if (*inicio == 0) {
		*inicio = nuevo;
	}
	else {
		nodo* tmp = *inicio;
		if (strcmp(tmp->name, nuevo->name) < 0) {
			tmp->next->prev = nuevo;
			nuevo->next = tmp->next;
			nuevo->prev = tmp;
			tmp->next = nuevo;
		}
		else if (strcmp(tmp->name, nuevo->name) > 0) {
			Insertar(&tmp->next, n);
		}
	}

}

nodo ** UtilidadesListaEnlazada::crearLista(int size)
{

	int contador = 0;
	nodo ** raiz = 0;
	nodo *nuevo = new nodo;
		do{

			cout << "Ingrese nombre \n";
			cin >> nuevo->name;
			Insertar(raiz, nuevo->name);
			contador++;




		} while (contador <= size);


	return raiz ;
}

void UtilidadesListaEnlazada::imprimir(nodo **inicio)
{

	if (*inicio == 0)
		return;
	else
	{
		nodo *tmp = *inicio;

		printf("%s\n", tmp->name);
		imprimir(&tmp->next);
		

	}
}

