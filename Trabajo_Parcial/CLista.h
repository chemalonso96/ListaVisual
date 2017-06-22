#pragma once
#include "CNodo.h"
#include "CNodo.cpp"

class CLista
{
	CNodo* inicio;
public:
	CLista(void);
	~CLista(void);

	bool Insertar_al_inicio(int dato); 
	bool eliminar(int pos);
};