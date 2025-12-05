#include "Luftdruckueberwachung.hpp"

using namespace std;

Luftdruckueberwachung::Luftdruckueberwachung()
{
  LuftdruckSollwert = 18;   // Sollwert im Bereich 15-20 mbar
  aktuellerLuftdruckwert = 0;
}

void Luftdruckueberwachung::AnzeigenaktuellenLuftdruckwert()
{
  cout << "Aktueller Luftdruck"
       << aktuellerLuftdruckwert << "mbar\n";
}

void Luftdruckueberwachung::AnzeigenLuftdrucksollwert()
{
  cout << "Luftdruck-Sollwert: "
       << LuftdruckSollwert << "mbar\n";
}

void Luftdruckueberwachung::setAktuellenLuftdruckwert(int wert)
{
  aktuellerLuftdruckwert = wert;
}

bool Luftdruckueberwachung::setLuftdrucksollwert(int wert) {
  if (wert >= 15 && wert <= 20)
  {
    LuftdruckSollwert = wert;
    return true;
  }
  return false;

}

bool Luftdruckueberwachung::Alarm1()
{
  return aktuellerLuftdruckwert > LuftdruckSollwert;
}