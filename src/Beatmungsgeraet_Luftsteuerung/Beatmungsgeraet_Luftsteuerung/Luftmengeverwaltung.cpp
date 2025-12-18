#include "Luftmengeverwaltung.hpp"
#include <iostream>

using namespace std;

// Farben
const string RED = "\033[31m";
const string RESET = "\033[0m";

// Standard-Konstruktor
Luftmengeverwaltung::Luftmengeverwaltung()
  : modus(Mengenmodus_::Wohnbereich)
{
}

// Konstruktor mit Parameter
Luftmengeverwaltung::Luftmengeverwaltung(Mengenmodus_ m)
  : modus(m)
{
}

// Benutzer kann Modus auswählen
void Luftmengeverwaltung::auswaehlen()
{
  int auswahl = 0;

  cout << "\nBitte wählen Sie den Modus aus:\n";
  cout << "[1] Wohnbereich\n";
  cout << "[2] Arbeitsbereich\n";
  cout << "Ihre Auswahl: ";
  cin >> auswahl;

  if (auswahl == 1) {
    modus = Mengenmodus_::Wohnbereich;
    cout << "Modus wird auf 'Wohnbereich' gesetzt.\n";
  }
  else if (auswahl == 2) {
    modus = Mengenmodus_::Arbeitsbereich;
    cout << "Modus wird auf 'Arbeitsbereich' gesetzt.\n";
  }
  else {
    cout << RED << "Ungültige Auswahl! Automatisch: Wohnbereich"
      << RESET << "\n";
    modus = Mengenmodus_::Wohnbereich;
  }
}

// Einstellen der Luftmenge
void Luftmengeverwaltung::einstellen()
{
  if (modus == Mengenmodus_::Wohnbereich) {
    cout << "Luftmenge für Wohnbereich eingestellt (20–30 m³/h).\n";
  }
  else {
    cout << "Luftmenge für Arbeitsbereich eingestellt (40–60 m³/h).\n";
  }
}

// Modus anzeigen
void Luftmengeverwaltung::AnzeigenLuftdruck() const
{
  cout << "Aktueller Modus: ";

  if (modus == Mengenmodus_::Wohnbereich) {
    cout << "Wohnbereich\n";
  }
  else {
    cout << "Arbeitsbereich\n";
  }
}
