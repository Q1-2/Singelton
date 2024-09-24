#pragma once
#include <string>
#include <list>
#include "Loesung.h"

//1.2.4
class Wissensdatenbank
{
private:
	list<Loesung*> loesungen;
	static Wissensdatenbank* instance;	// Das Klassenattribut instance referenziert das einzige Objekt der Klasse Wissensdatenbank.
	Wissensdatenbank() { // Der private Konstruktor kann nur innerhalb der Klasse aufgerufen werden.				
	}

public:
	list<Loesung*> findeLoesung(string stichwort);
	void aufnehmenNeueLoesung(string s, string b);

	static Wissensdatenbank* getInstance();
};

// https://de.wikibooks.org/wiki/C%2B%2B-Programmierung:_Entwurfsmuster:_Singleton


