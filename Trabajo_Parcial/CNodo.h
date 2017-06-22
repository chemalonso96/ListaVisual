#pragma once

class CNodo
{
	int dato;
	CNodo* next;
	CNodo* anterior;
public:
	CNodo(void);
	~CNodo(void);
	CNodo(int _dato, CNodo* _anterior,CNodo* _next);

	void setDato(int _dato);
	void setSiguiente(CNodo* _next);
	void setAnterior(CNodo* _anterior);

	int getDato();
	CNodo* getNext();
	CNodo* getAnterior();
};