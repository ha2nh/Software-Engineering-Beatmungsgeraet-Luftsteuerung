#ifndef LUFTSTEUERUNG_HPP
#define LUFTSTEUERUNG_HPP

#include <iostream>

class Luftsteuerung {
private:
  bool aktiv;

public:
  Luftsteuerung();

  void Starten();
  void Stoppen();
  void AnzeigenStatus() const;
};

#endif
