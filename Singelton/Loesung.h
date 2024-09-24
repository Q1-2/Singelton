#pragma once
#include <string>
#include <list>

using namespace std;

class Loesung
{
private:
	string stichwort;
	string beschreibung;

public:
	Loesung(string s, string b);

	string getStichwort();

	string getBeschreibung();
};

