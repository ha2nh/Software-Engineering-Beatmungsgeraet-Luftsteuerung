
#ifndef DAUERVERWALTUNG_HPP
#define DAUERVERWALTUNG_HPP

#include <iostream>

enum class Benutzungsdauer {
  Min60 = 60,
  Min180 = 180,
  Min360 = 360,
};


class Dauerverwaltung {
protected:
  int Atemfrequenz;
  Benutzungsdauer benutzungsdauer;

public:
  Dauerverwaltung();

  void AnzeigenAtemfrequenz();
  void AuswahlBentzungsdauer(int auswahl);
  void AnzeigenBentzungsdauer();

  // Getter
  Benutzungsdauer getBenutzungsdauer() {
    return benutzungsdauer;
  }; // inline
};
#endif 