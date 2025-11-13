#include "Digitales_Display.hpp";
#include <iostream>

using namespace std;

//Static Instance initialisieren
Digitales_Display* Digitales_Display::instance = nullptr;

// Privater Konstruktor
Digitales_Display::Digitales_Display() : menge(Luftmengeverwaltung::Wohnbereich), druck(), dauer(), alarm()
{
  cout << "Digitales Display initialisiert (Singelton)\n";
}

// Zugriff auf die einzige Instanz
Digitales_Display* Digitales_Display::getInstance() {
  if (instance == nullptr) {
    instance = new Digitales_Display();
  }
  return instance;
}

// Allesanzeigen
void Digitales_Display::allesanzeigen() {
  cout << "\n===Digitales Display: Alle Informationen===\n";
  steuerung.AnzeigenStatus();
  menge.anzeigenLuftdruck();
}