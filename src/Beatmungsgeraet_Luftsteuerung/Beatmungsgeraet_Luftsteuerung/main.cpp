#include "Digitales_Display.hpp"
#include <iostream>

using namespace std;

int main()
{
  Digitales_Display* display = Digitales_Display::getInstance();

  // Benutzer konfiguriert zuerst alles
  display->BenutzerEinstellungen();

  // System starten
  display->SystemStarten();

  // Alles anzeigen
  display->allesanzeigen();

  // System stoppen
  display->SystemStoppen();

  return 0;
}
