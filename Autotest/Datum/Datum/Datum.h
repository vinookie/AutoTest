//Diese Klasse hat �ffentliche und private Abschnitte.
//Der �ffentliche Bereich enth�lt die
//Deklarationen der Methoden und Konstruktoren,
//die von au�en aufgerufen werden k�nnen, w�hrend der private Bereich 
//die Daten und Methoden enth�lt, auf die nur die Klasse selbst zugreifen kann. 



class Datum {
public:
    Datum(int tag, int monat, int jahr);
    int TagDesJahres();
    static int IstSchaltjahr(int jahr);
    static void Plappern(bool flag);

private:
    static int anzahlExemplare;
    int tag, monat, jahr;
    static bool plappernFlag; // neues statisches Feld
    //Der Konstruktor der Klasse Datum wird mit 
    // drei Parametern (tag, monat, jahr) aufgerufen und initialisiert
    //die Instanzvariablen der Klasse.
};

