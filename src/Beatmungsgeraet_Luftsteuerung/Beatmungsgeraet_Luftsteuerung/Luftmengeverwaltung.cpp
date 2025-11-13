#include "Luftmengeverwaltung.hpp"
using namespace std;

Luftmengeverwaltung::Luftmengeverwaltung(Mengenmodus_ m) : modus(m)
{
}


// Benutzer kann Modus ueber Eingabe auswaehlen
void Luftmengeverwaltung::auswaehlen()
{
  int auswahl = 0;

  cout << "\nBitte wählen Sie den Modus aus:\n";
  cout << "[1] Wohnbereich";
  cout << "[2] Arbeitsbereich\n";
  cout << "Ihre Auswahl: ";
  cin >> auswahl;

  if (auswahl == 1) {
    modus = Wohnbereich;
    cout << "Modus wird auf 'Wohnbereich' gesetzt.\n";
  }
  else if (auswahl == 2) {
    cout << "Modus auf 'Arbeitsbereich' gesetzt.\n";
  }
  else {
    cout << "Ungültige Auswwahl. Es wird austomatisch ausgewählt: Wohnbereich\n";
    modus = Wohnbereich;
  }


}

  // Einstellen auf aktuellen Modus
void Luftmengeverwaltung::einstellen()
{
  if (modus == Wohnbereich) {
    cout << "Lufmenge für Wohnbereich erfolgreich eingestellt (20-30 m3/h).\n";
  }
  else {
    cout << "Luftmenge für Arbeitbereich erfolgreich eingestellt (40-60 m3/h).\n";
  }
}


// Aktullen Modus anzeigen
void Luftmengeverwaltung::anzeigenLuftdruck() const
{
  cout << "Aktueller Modus: ";

  if (modus == Wohnbereich) {
    cout << "Wohnbereich\n";
  }
  else {
    cout << "Arbeitsbereich";
  }
}




