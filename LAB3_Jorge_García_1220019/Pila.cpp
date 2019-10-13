#include "Pila.h"



Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}

void Pila::Apilar(Carta valor) {
	Nodo * Nodonuevo = new Nodo();
	Nodonuevo->Valor = valor;
	if (Head == nullptr) {
		Head = Nodonuevo;
	}
	else 
	{
		Nodo* Aux = new Nodo();
		Aux = Head;
		Head = Nodonuevo;
		Head->Siguiente = Aux;
	}
	NElementos++;
}
Carta Pila::Desapilar() {
	if (Head == nullptr) 
	{
		return *new Carta();
	}
	else
	{
		Carta valor = Head->Valor;
		Head = Head->Siguiente;
		NElementos--;
		return valor;
	}
}
Carta Pila::ObtenerCima() {
	if (Head == nullptr) {
		return *new Carta;
	}
	else {
		return Head->Valor;

	}
}
