
#include <iostream>
#include <string>
using namespace std;

struct Node
{
	char *name;
	Node *next;
	Node *prev;

};


class UtilidadesListaEnlazada {
public:

	static void insertar(Node *&root, const char* value);
	static void imprimir(Node *&root);
	static Node* crearLista(int size);

};
