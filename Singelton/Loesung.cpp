#include "Loesung.h"
#include <string>


Loesung::Loesung(string s, string b) {
	stichwort = s;
	beschreibung = b;
}

string Loesung::getStichwort() {
	return stichwort;
}

string Loesung::getBeschreibung() {
	return beschreibung;
}