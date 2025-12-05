#ifndef LUFTDRUCKUEBERWACHUNG_HPP
#define LUFTDRUCKUEBERWACHUNG_HPP

#include <iostream>

class Luftdruckueberwachung {
protected:
  int aktuellerLuftdruckwert;
  int LuftdruckSollwert;

public:
  Luftdruckueberwachung();

  void AnzeigenaktuellenLuftdruckwert();
  void AnzeigenLuftdrucksollwert();

  void setAktuellenLuftdruckwert(int wert);
  bool setLuftdrucksollwert(int wert);

  bool Alarm1(); // true =  Soll ueberschritten

};

#endif