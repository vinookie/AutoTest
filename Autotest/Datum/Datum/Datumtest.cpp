#include <iostream>
#include "datum.h"

using namespace std;

int main() {
	// Konstruktor Werte zuweisen
	Datum d1(1, 1, 2022);
	Datum d2(29, 2, 2024);
	Datum d3(30, 4, 2023);
	//Test für tagdesjahres
	cout << "d1.tagdesjahres(): " << d1.TagDesJahres() << endl; // ausgabe: 1
	cout << "d2.tagdesjahres(): " << d2.TagDesJahres() << endl; // ausgabe: 60
	cout << "d3.tagdesjahres(): " << d3.TagDesJahres() << endl; // ausgabe: 120

	// Test für istschaltjahr
	cout << "istschaltjahr(2022): " << Datum::IstSchaltjahr(2022) << endl; // ausgabe: 0
	cout << "istschaltjahr(2024): " << Datum::IstSchaltjahr(2024) << endl; // ausgabe: 1

	// Teste Kunstruktor
	for (int i = 1; i <= 12; i++) {
		Datum d(i, 1, 2022);
	}


	// Aktiviere "plappern" Modus
	Datum::Plappern(true);

	// Konstruktor und Methoden Test
	Datum d4(1, 1, 2022);
	Datum d5(29, 2, 2024);
	Datum d6(30, 4, 2023);

	cout << "d1.tagdesjahres(): " << d4.TagDesJahres() << endl;
	cout << "d2.tagdesjahres(): " << d5.TagDesJahres() << endl;
	cout << "d3.tagdesjahres(): " << d6.TagDesJahres() << endl;


	// Deaktiviere "plappern" Modus
	Datum::Plappern(false);

	return 0;
}