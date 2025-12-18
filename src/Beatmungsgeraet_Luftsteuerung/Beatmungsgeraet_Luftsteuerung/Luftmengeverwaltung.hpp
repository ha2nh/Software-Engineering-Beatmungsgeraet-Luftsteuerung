#ifndef LUFTMENGEVERWALTUNG_HPP
#define LUFTMENGEVERWALTUNG_HPP

#include <iostream>

enum class Mengenmodus_ {
  Wohnbereich,
  Arbeitsbereich
};

class Luftmengeverwaltung {
private:
  Mengenmodus_ modus;

public:
  Luftmengeverwaltung();                // Default-Konstruktor (wichtig!)
  Luftmengeverwaltung(Mengenmodus_ m);  // Konstruktor mit Modus
  ~Luftmengeverwaltung() = default;

  // Methoden
  void auswaehlen();             // Benutzer w‰hlt Modus
  void einstellen();             // Einstellungen anwenden
  void AnzeigenLuftdruck() const; // Aktuellen Modus anzeigen (Groﬂ/klein korrigiert)

  // Optionaler Getter
  Mengenmodus_ getModus() const { return modus; }
};

#endif
