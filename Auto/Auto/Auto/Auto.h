#ifndef AUTO_H
#define AUTO_H

#include <string>

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
    ~Auto();

    float fahren(float strecke);
    int getRadzahl() const;
    std::string getFarbe() const;
    int getPS() const;
    int getAnzahlSitze() const;
    float getSpritverbrauch() const;
    float getTankinhalt() const;
    float getTankgroesse() const;
    void tanken(float menge);
};

#endif