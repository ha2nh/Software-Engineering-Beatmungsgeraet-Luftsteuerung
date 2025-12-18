#include "Digitales_Display.hpp"
#include <iostream>

using namespace std;

const string RED = "\033[31m";
const string RESET = "\033[0m";

// Singleton instance
Digitales_Display* Digitales_Display::instance = nullptr;

// Privater Konstruktor
Digitales_Display::Digitales_Display()
  : steuerung(),
  menge(),
  druck(),
  dauer(),
  alarm()
{
  cout << "Digitales Display initialisiert (Singleton)\n";
}

void Digitales_Display::BenutzerEinstellungen()
{
    cout << "\n=== Benutzereinstellungen ===\n";

    // 1. Luftmengen-Modus auswählen
    menge.auswaehlen();
    menge.einstellen();

    // 2. Benutzungsdauer auswählen
    int auswahl;
    cout << "\nBenutzungsdauer waehlen:\n";
    cout << "[1] 60 Minuten\n";
    cout << "[2] 180 Minuten\n";
    cout << "[3] 360 Minuten\n";
    cout << "Ihre Auswahl: ";
    cin >> auswahl;

    dauer.AuswahlBenutzungsdauer(auswahl);

    cout << "\nEinstellungen erfolgreich gespeichert.\n";
  }

// Zugriff auf die einzige Instanz
Digitales_Display* Digitales_Display::getInstance() {
  if (instance == nullptr) {
    instance = new Digitales_Display();
  }
  return instance;
}

// Alles anzeigen
void Digitales_Display::allesanzeigen() {
  cout << "\n=== Digitales Display: Alle Informationen ===\n";

  // Luftsteuerung Status (falls du später eine Status-Methode baust)
  //steuerung.AnzeigenStatus();

  dauer.AnzeigenAtemfrequenz();
  dauer.AnzeigenBenutzungsdauer();

  menge.AnzeigenLuftdruck();
  druck.AnzeigenaktuellenLuftdruckwert();

  // Alarme (rot)
  cout << RED;
  alarm.AnzeigenBenutzungsdauerwarnung();
  alarm.AnzeigenSollwertueberschreitungsalarm();
  cout << RESET;
}
