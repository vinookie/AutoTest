// Einbinden der Header-Datei Datum.h
#include "Datum.h"
#include <iostream>

using namespace std;


int Datum::anzahlExemplare = 0;
bool Datum::plappernFlag = false; // initialisieren des neuen statischen Feldes


// Konstruktor der Klasse Datum
Datum::Datum(int tag, int monat, int jahr) {
    if (plappernFlag) { // Neue if-Abfrage, um zu prüfen, ob das plappernFlag gesetzt ist
        cout << "Neues Datum-Objekt mit folgenden Werten erzeugt: ";
        cout << "Tag: " << tag << ", Monat: " << monat << ", Jahr: " << jahr << endl;
    }
    if (anzahlExemplare >= 10) {
        cout << "Achtung: Es wurden bereits 10 Exemplare der Klasse Datum erzeugt!" << endl;
    }
    this->tag = tag;
    this->monat = monat;
    this->jahr = jahr;
    anzahlExemplare++;
}


// Methode zur Berechnung des Tages im Jahr
int Datum::TagDesJahres() {
    int tagDesJahres = tag;
    int tageInMonat[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Iteration über alle Monate bis zum aktuellen Monat
    for (int i = 1; i < monat; i++) {
        // Falls Februar und Schaltjahr, einen zusätzlichen Tag hinzufügen
        if (i == 2 && IstSchaltjahr(jahr)) {
            tagDesJahres += 1;
        }
        // Ansonsten die Tage im Monat addieren
        tagDesJahres += tageInMonat[i];
    }
    return tagDesJahres;
}
// Methode zur Prüfung, ob ein Jahr ein Schaltjahr ist
int Datum::IstSchaltjahr(int jahr) {
    // Wenn das Jahr durch 4 teilbar ist und nicht durch 100 teilbar oder durch 400 teilbar ist, ist es ein Schaltjahr
    if ((jahr % 4 == 0 && jahr % 100 != 0) || jahr % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void Datum::Plappern(bool flag) {
    plappernFlag = flag; // Setzen des plappernFlags auf den übergebenen Wert
    if (plappernFlag) {
        cout << "Der geschwätzige Modus wurde aktiviert." << endl;
    }
    else {
        cout << "Der geschwätzige Modus wurde deaktiviert." << endl;
    }
}