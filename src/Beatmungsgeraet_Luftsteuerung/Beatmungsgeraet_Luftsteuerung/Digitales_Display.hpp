#ifndef DIGITALES_DISPLAY_HPP
#define DIGITALES_DISPLAY_HPP

#include <iostream>
#include "Luftsteuerung.hpp"
#include "Luftmengeverwaltung.hpp"
#include "Luftdruckueberwachung.hpp"
#include "Dauerverwaltung.hpp"
#include "Alarm.hpp"

class Digitales_Display {
protected:
  // Singleton Instanz
  static Digitales_Display* instance;
  Digitales_Display(); // Konstruktor in cpp definiert

  // Nicht kopierbar
  Digitales_Display(const Digitales_Display&) = delete;
  Digitales_Display& operator=(const Digitales_Display&) = delete;

  // Module
  Luftsteuerung steuerung;
  Luftmengeverwaltung menge;
  Luftdruckueberwachung druck;
  Dauerverwaltung dauer;
  Alarm alarm;

public:

  void BenutzerEinstellungen();

  // Singleton Zugriff
  static Digitales_Display* getInstance();

  // Methoden
  void allesanzeigen();
  void SystemStarten() { steuerung.Starten(); }
  void SystemStoppen() { steuerung.Stoppen(); }
};

#endif
