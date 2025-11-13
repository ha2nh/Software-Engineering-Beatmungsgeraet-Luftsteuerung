#ifndef LUFTMENGEVERWALTUNG_HPP
#define LUFTMENGEVERWALTUNG_HPP

#include<iostream>
using namespace std;


class Luftmengeverwaltung {

public:
  enum Mengenmodus_ { Wohnbereich, Arbeitbereich }; 
  Luftmengeverwaltung(Mengenmodus_ m); // Konstruktor
  ~Luftmengeverwaltung() {}; // Dekonstruktor

protected:
  Mengenmodus_ modus;

public: 

// Mehtoden
  void auswaehlen();                        //Benutzer waehlt Modus aus
  void einstellen();                        // Einstellungen anwenden
  void anzeigenLuftdruck() const;           // Aktuellen Modus anzeigen

};
#endif