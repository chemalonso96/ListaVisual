#include "CLista.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

bool CLista::Insertar_al_inicio(int dato){
	CNodo*n = new CNodo(dato, NULL, NULL);
	if (inicio = NULL){
		inicio = n;
	}
	else{
		n->setSiguiente(inicio);
		inicio->setAnterior(n);
		inicio = n;
	}
	return true;
}
bool CLista::eliminar(int pos){
	CNodo* r = inicio;
	CNodo* bfr = NULL;
	CNodo* next = NULL;
	int _pos = 1;
	while (r->getDato() != NULL){
		if (_pos == pos){
			if (r == inicio){
				next = r->getNext();
				next->setSiguiente(NULL);
			}
			else{
				next = r->getNext();
				bfr = r->getAnterior();
				bfr->setSiguiente(next);
				next->setAnterior(bfr);
			}
		}
		else{
			_pos++;
			bfr = r;
			r = r->getNext();
		}
	}
}