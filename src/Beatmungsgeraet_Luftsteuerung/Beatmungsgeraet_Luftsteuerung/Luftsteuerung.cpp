#include "Luftsteuerung.hpp"
#include <iostream>

using namespace std;

const string RED = "\033[31m";
const string RESET = "\033[0m";

Luftsteuerung::Luftsteuerung()
  : aktiv(false)
{
}

void Luftsteuerung::Starten()
{
  if (!aktiv) {
    aktiv = true;
    cout << "Luftsteuerung gestartet.\n";
  }
  else {
    cout << RED << "Fehler: Luftsteuerung läuft bereits!" << RESET << endl;
  }
}

void Luftsteuerung::Stoppen()
{
  if (aktiv) {
    aktiv = false;
    cout << "Luftsteuerung gestoppt.\n";
  }
  else {
    cout << RED << "Fehler: Luftsteuerung ist bereits gestoppt!" << RESET << endl;
  }
}

void Luftsteuerung::AnzeigenStatus() const
{
  cout << "Luftsteuerungs-Status: ";

  if (aktiv) {
    cout << "AKTIV\n";
  }
  else {
    cout << RED << "INAKTIV" << RESET << "\n";
  }
}
