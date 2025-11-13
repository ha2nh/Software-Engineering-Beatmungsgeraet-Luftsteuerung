#ifndef DIGITALES_DISPLAY_HPP
#define DIGITALES_DISPLAY_HPP

#include<iostream>
#include "Luftsteuerung.hpp";
#include "Luftmengeverwaltung.hpp";
#include "Luftdruckueberwachung.hpp";
#include "Dauerverwaltung.hpp";
#include "Alarm.hpp";


class Digitales_Display {
protected:
  // Single Instance
  static Digitales_Display* instance;
  Digitales_Display() {}; // Konstruktor

  //nicht kopierbar
  Digitales_Display(const Digitales_Display&) = delete;
  Digitales_Display& operator=(const Digitales_Display&) = delete;

  // Klasse
  Luftsteuerung steuerung;
  Luftmengeverwaltung menge;
  /*Luftdruckueberwachung druck;
  Dauerverwaltung dauer;
  Alarm alarm;*/

public:
  // Zugriff auf die einzige Instanz
  static Digitales_Display* getInstance();

  //Methoden
  void allesanzeigen();
  void SystemStarten() { steuerung.Starten(); }
  void SystemStoppen() { steuerung.Stoppen(); }

};
#endif
