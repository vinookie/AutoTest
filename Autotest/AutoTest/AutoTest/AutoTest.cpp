#include <iostream>
#include "Auto.h"

using namespace std;

int main() {

    // Instanziierung auf dem Stack
    Auto auto1;
    cout << "Instanz auf dem Stack: " << auto1.getFarbe() << endl;

    // Instanziierung im Datensegment
    static Auto auto2(4, "rot", 100, 4, 9.5, 40.0, 40.0);
    cout << "Instanz im Datensegment: " << auto2.getFarbe() << endl;

    // Instanziierung auf dem Heap
    Auto* auto3 = new Auto(2, "blau", 80, 2, 6.5, 20.0, 30.0);
    cout << "Instanz auf dem Heap: " << auto3->getFarbe() << endl;

    

    // Testen der Methoden
    float strecke = 100;
    cout << "Wieviel KM soll das Auto fahren?";
    cin >> strecke;
    cout << "Gefahrene Strecke: " << auto1.fahren(strecke) << endl;
    cout << "Tankinhalt vor dem Tanken: " << auto1.getTankinhalt() << endl;
    auto1.tanken(0.00001);
    cout << "Tankinhalt nach dem Tanken: " << auto1.getTankinhalt() << endl;

    delete auto3; // Heap-Speicher freigeben

    // Selbst werte zuweisen
    int a = 0;
    string b = "";
    int c = 0;
    int d = 0;
    float e = 0.0f;
    float f = 0.0f;
    float g = 0.0f;

    cout << "Welche Radzahl hat dein Auto?";
    cin >> a;
    cout << "Welche Farbe hat dein Auto?";
    cin >> b;
    cout << "Wieviel PS hat dein Auto?";
    cin >> c;
    cout << "Wieviele Sitze hat dein Auto?";
    cin >> d;
    cout << "Wie hoch ist der Spritverbrauch bei deinem Auto?";
    cin >> e;
    cout << "Wie ist der max Tankfuellstand bei deinem Auto?";
    cin >> f;
    g = f;

    Auto* auto4 = new Auto(a, b, c, d, e, f, g);
    cout << "Wieviel KM soll das Auto fahren?";
    cin >> strecke;
    cout << "Gefahrene Strecke: " << auto4->fahren(strecke) << endl;
    cout << "Tankinhalt vor dem Tanken: " << auto4->getTankinhalt() << endl;
    auto4->tanken(0.00001);
    cout << "Tankinhalt nach dem Tanken: " << auto4->getTankinhalt() << endl;

    delete auto4; // Heap-Speicher freigeben

    return 0;
}