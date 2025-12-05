#include "Dauerverwaltung.hpp"

using namespace std;

// Konstruktor: initialwerte setzen
Dauerverwaltung::Dauerverwaltung()
  : Atemfrequenz(12), // Beispielwert (12 Atemzuege/min)
  benutzungsdauer(Benutzungsdauer::Min60) // Standard: 60 min
{ }

// Atemfrequenz ausgeben
void Dauerverwaltung::AnzeigenAtemfrequenz() {
  cout << "Atemfrequenz: " << Atemfrequenz << " Atemzuege/min \n";
}

// Auswahl der Dauer ( 1 = 60, 2 = 180, 3 = 360)
void Dauerverwaltung::AuswahlBentzungsdauer(int auswahl) {
  switch (auswahl) 
  {
  case 1:
    benutzungsdauer = Benutzungsdauer::Min60;
    break;
  case 2:
    benutzungsdauer = Benutzungsdauer::Min180;
    break;
  case 3:
    benutzungsdauer = Benutzungsdauer::Min360;
    break;
  default:
    cout << "Ungueltige Dauer-Auswahl!\n";
    break;
  }
}

// Ausgabe der gewaehlten Dauer
void Dauerverwaltung::AnzeigenBentzungsdauer() {
  cout << "Benutzungsdauer: "
    << static_cast<int>(benutzungsdauer)
    << " Minuten\n";
}





