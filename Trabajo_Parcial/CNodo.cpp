#include "CNodo.h"

CNodo::CNodo(void){}
CNodo::~CNodo(void){}
CNodo::CNodo(int _dato, CNodo* _anterior,CNodo* _next){
	dato = _dato;
	anterior = _anterior;
	next = _next;
}

void CNodo::setDato(int _dato){
	dato = _dato;
}
void CNodo::setSiguiente(CNodo* _next){
	next = _next;
}
void CNodo::setAnterior(CNodo* _anterior){
	anterior = _anterior;
}

int    CNodo::getDato(){
	return dato;
}
CNodo* CNodo::getNext(){
	return next;
}
CNodo* CNodo::getAnterior(){
	return anterior;
}