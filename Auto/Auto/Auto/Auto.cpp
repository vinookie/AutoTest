#include "pch.h"
#include "Auto.h"

Auto::Auto() :
    radzahl(4),
    farbe("weiss"),
    ps(75),
    anzahl_sitze(5),
    spritverbrauch(7.5),
    tankgroesse(50.0),
    tankinhalt(50.0)
{}

Auto::Auto(int r, std::string f, int p, int a, float s, float t, float g) :
    radzahl(r),
    farbe(f),
    ps(p),
    anzahl_sitze(a),
    spritverbrauch(s),
    tankgroesse(g),
    tankinhalt(t)
{}

Auto::Auto(const Auto& other) :
    radzahl(other.radzahl),
    farbe(other.farbe),
    ps(other.ps),
    anzahl_sitze(other.anzahl_sitze),
    spritverbrauch(other.spritverbrauch),
    tankgroesse(other.tankgroesse),
    tankinhalt(other.tankinhalt)
{}

Auto::~Auto() {}

float Auto::fahren(float strecke) {
    float verbrauch = strecke * spritverbrauch / 100.0;
    if (verbrauch > tankinhalt) {
        float gefahren = tankinhalt / spritverbrauch * 100.0;
        tankinhalt = 0;
        return gefahren;
    }
    else {
        tankinhalt -= verbrauch;
        return strecke;
    }
}

int Auto::getRadzahl() const {
    return radzahl;
}

std::string Auto::getFarbe() const {
    return farbe;
}

int Auto::getPS() const {
    return ps;
}

int Auto::getAnzahlSitze() const {
    return anzahl_sitze;
}

float Auto::getSpritverbrauch() const {
    return spritverbrauch;
}

float Auto::getTankinhalt() const {
    return tankinhalt;
}

float Auto::getTankgroesse() const {
    return tankgroesse;
}

void Auto::tanken(float menge) {
    while (menge + tankinhalt <= tankgroesse) {
        tankinhalt = tankinhalt + menge;
    }
}