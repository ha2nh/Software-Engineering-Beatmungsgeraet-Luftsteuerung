#ifndef LUFTDRUCKUEBERWACHUNG_HPP
#define LUFTDRUCKUEBERWACHUNG_HPP

#include <iostream>

class Luftdruckueberwachung {
private:
  int aktuellerLuftdruckwert;  // gemessener Wert
  int LuftdruckSollwert;       // gültiger Bereich: 15–20 mbar

public:
  Luftdruckueberwachung();

  // Anzeigen-Methoden (ändern nichts → const)
  void AnzeigenaktuellenLuftdruckwert() const;
  void AnzeigenLuftdrucksollwert() const;

  // Setter
  void setAktuellenLuftdruckwert(int wert);
  bool setLuftdrucksollwert(int wert);

  // Alarmprüfung
  bool Alarm1() const;
};

#endif
