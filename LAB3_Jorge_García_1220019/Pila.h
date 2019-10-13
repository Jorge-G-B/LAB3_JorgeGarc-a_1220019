#pragma once
#include "Nodo.h"
#include "Carta.h"
class Pila
{
public:
	Pila();
	~Pila();
public:
	Nodo* Head = nullptr;
public:
	int NElementos = 0;
public:
	void Apilar(Carta valor);
public: 
	Carta Desapilar();
public:
	Carta ObtenerCima();
};

