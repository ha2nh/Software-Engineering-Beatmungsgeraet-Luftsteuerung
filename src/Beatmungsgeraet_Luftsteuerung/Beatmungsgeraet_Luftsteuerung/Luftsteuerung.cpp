#include "Luftsteuerung.hpp"
using namespace std;

Luftsteuerung::Luftsteuerung() : aktiv(false)
{
}

void Luftsteuerung::Starten()
{
  if (!aktiv) {
    aktiv = true;
    cout << "Luftsteuerung gestartet\n";
  }
  else {
    cout << "Luftsteuerung läuft bereits.\n";
  }
}

void Luftsteuerung::Stoppen()
{
  if (aktiv) {
    aktiv = false;
    cout << "Luftsteuerung gestoppt.\n";
  }
  else {
    cout << "Luftsteuerung ist bereits gestoppt.\n";
  }
}

void Luftsteuerung::AnzeigenStatus() const
{
  cout << "Luftsteuerung Status: ";

  if (!aktiv) {
    cout << "AKTIV";
  }
  else {
    cout << "INAKTIV";
  }
}



