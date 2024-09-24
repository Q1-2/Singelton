// Singelton.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Loesung.h"
#include "Wissensdatenbank.h"

using namespace std;

int main()
{
	Wissensdatenbank* db = Wissensdatenbank::getInstance();

	Wissensdatenbank::getInstance()->aufnehmenNeueLoesung("Test", "Test gefunden");
	Wissensdatenbank::getInstance()->aufnehmenNeueLoesung("Test2", "Test2 gefunden");
	db->aufnehmenNeueLoesung("Test", "Test gefunden");


	for (Loesung* loesung : Wissensdatenbank::getInstance()->findeLoesung("Test")) {
		cout << loesung->getStichwort() << endl;
		cout << loesung->getBeschreibung() << endl;
		cout << endl;
	}

	return 0;
}