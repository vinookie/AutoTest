//Diese Zeilen sind Teil einer Header - Datei und dienen dazu, die darin enthaltenen Definitionen von Klassen, Funktionen und Variablen vor 
//Mehrfachdefinitionen zu sch�tzen.Dies wird erreicht, indem der gesamte Inhalt der Header - Datei in einen Pr�prozessor - Direktive(#ifndef)
//eingebettet wird, der eine Bedingung definiert, die pr�ft, ob ein bestimmtes Makro - Symbol(in diesem Fall AUTO_H) bereits definiert ist.Wenn das
//Makro - Symbol bereits definiert ist, wird der gesamte Inhalt der Header - Datei �bersprungen, um Mehrfachdefinitionen zu vermeiden.Wenn das Makro -
//Symbol noch nicht definiert ist, wird der Inhalt der Header - Datei normal verarbeitet und das Makro - Symbol definiert, um zuk�nftige Mehrfachdefinitionen 
//zu verhindern.
#ifndef AUTO_H
#define AUTO_H

#include <string>  

// Konstruktion der Klasse Auto
class Auto {

    
private:
    int radzahl;
    std::string farbe;
    int ps;
    int anzahl_sitze;
    float spritverbrauch;
    float tankinhalt;
    float tankgroesse;

public:
    Auto();
    Auto(int r, std::string f, int p, int a, float s, float t, float g);
    Auto(const Auto& other);
    ~Auto(); // Ein Destruktor ist eine spezielle Funktion, die automatisch aufgerufen wird, wenn ein Objekt der Klasse "Auto" 
    //zerst�rt wird, zum Beispiel wenn es seinen G�ltigkeitsbereich verl�sst oder wenn sein Speicherplatz freigegeben wird.Der Zweck des Destruktors 
    //besteht darin, Speicher oder Ressourcen freizugeben, die vom Objekt w�hrend seiner Lebensdauer allokiert wurden.In diesem Fall gibt die Deklaration an,
    //dass die Klasse "Auto" einen Standard - Destruktor hat, der keine speziellen Aktionen ausf�hrt.

    float fahren(float strecke);
    int getRadzahl() const;   //verschiedene getter um den Wert abrufen zu k�nnen
    std::string getFarbe() const;
    int getPS() const;
    int getAnzahlSitze() const;
    float getSpritverbrauch() const;
    float getTankinhalt() const;
    float getTankgroesse() const;
    void tanken(float menge);  //Funktion um wieder voll zu tanken
};

#endif