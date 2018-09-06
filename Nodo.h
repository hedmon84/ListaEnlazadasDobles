#pragma once


#include<string>
#include<iostream>
using namespace std;

struct nodo
{
	char *name;
	nodo *next;
	nodo *prev;

};

class UtilidadesListaEnlazada {

public :

	static void Insertar(nodo **, char *);
	static nodo ** crearLista(int);
	static void imprimir(nodo**);

};


