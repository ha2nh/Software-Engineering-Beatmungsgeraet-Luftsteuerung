#include "Luftdruckueberwachung.hpp"
#include <iostream>

using namespace std;

// Farben
const string RED = "\033[31m";
const string RESET = "\033[0m";

Luftdruckueberwachung::Luftdruckueberwachung()
{
  LuftdruckSollwert = 18;         // Standard-Sollwert im Bereich 15–20 mbar
  aktuellerLuftdruckwert = 0;
}

void Luftdruckueberwachung::AnzeigenaktuellenLuftdruckwert() const
{
  cout << "Aktueller Luftdruck: "
    << aktuellerLuftdruckwert << " mbar";

  // farbige Alarmwarnung
  if (Alarm1())
    cout << "  " << RED << "(ALARM!)" << RESET;

  cout << endl;
}

void Luftdruckueberwachung::AnzeigenLuftdrucksollwert() const
{
  cout << "Luftdruck-Sollwert: "
    << LuftdruckSollwert << " mbar\n";
}

void Luftdruckueberwachung::setAktuellenLuftdruckwert(int wert)
{
  aktuellerLuftdruckwert = wert;
}

bool Luftdruckueberwachung::setLuftdrucksollwert(int wert)
{
  if (wert >= 15 && wert <= 20)
  {
    LuftdruckSollwert = wert;
    return true;
  }
  return false;
}

bool Luftdruckueberwachung::Alarm1() const
{
  // Alarm wenn außerhalb des gültigen Bereichs
  return (aktuellerLuftdruckwert < 15 ||
    aktuellerLuftdruckwert > 20);
}

// alarm.setSollwertueberschreitungsalarm(Alarm1());
