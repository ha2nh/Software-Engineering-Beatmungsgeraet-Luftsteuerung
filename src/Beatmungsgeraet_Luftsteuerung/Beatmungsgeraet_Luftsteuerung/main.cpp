#include "Digitales_Display.hpp";


int main() {
  // Zugriff auf die einzige Instanz
  Digitales_Display* display = Digitales_Display::getInstance();

  // System starten
  display->SystemStarten();

  // Alles anzeigen
  display->allesanzeigen();

  // System stoppen
  display->SystemStoppen();
  
  // Versucht, eine zweite Insatnz zu erstellen (geht nicht)
  Digitales_Display* display2 = Digitales_Display::getInstance();
  if (display == display2) {
    cout << "Es existiert nur eine einzige Display-Instanz (Singelton bestätigt)\n";
  }
  return 0;
}