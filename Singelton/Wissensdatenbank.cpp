#include "Wissensdatenbank.h"

Wissensdatenbank* Wissensdatenbank::instance = nullptr; // 1.2.5

list<Loesung*> Wissensdatenbank::findeLoesung(string stichwort)
{
	list<Loesung*> gefunden;
	for (Loesung* loesung : loesungen) {
		if (loesung->getStichwort() == stichwort)
			gefunden.push_back(loesung); // bzw. .add()
	}
	return gefunden;
}

void Wissensdatenbank::aufnehmenNeueLoesung(string s, string b)
{
	loesungen.push_back(new Loesung(s, b));
}

// 1.2.5
Wissensdatenbank* Wissensdatenbank::getInstance() { // bietet öffentlichen Zugriff auf dieses Objekt, da es public ist
	if (instance == nullptr)
	{
		instance = new Wissensdatenbank(); // erzeugt das Objekt, sofern dieses noch nicht existiert,
	}

	return instance; // liefert die Referenz auf das Objekt zurück,
}
