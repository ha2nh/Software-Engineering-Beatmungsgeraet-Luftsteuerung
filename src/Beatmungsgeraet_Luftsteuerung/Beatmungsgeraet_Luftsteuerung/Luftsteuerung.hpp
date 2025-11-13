#ifndef LUFTSTEUERUNG_HPP
#define LUFTSTEUERUNG_HPP

#include<iostream>


class Luftsteuerung {
protected:
  bool aktiv;

public:
  Luftsteuerung() ; // Konstruktor

  ~Luftsteuerung() {}; // Dekonstruktor 

 // Methoden
  void Starten();
  void Stoppen();
  void AnzeigenStatus() const;
  bool istAktiv() const { return aktiv; }
};

#endif