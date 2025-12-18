#include "Alarm.hpp"
#include <iostream>

using namespace std;

// Farben
const string RED = "\033[31m";
const string RESET = "\033[0m";

Alarm::Alarm()
  : Benutzungsdauerwarnung(0),
  Sollwertueberschreitungsalarm(false)
{
}

void Alarm::setBenutzungsdauerwarnung(int wert)
{
  Benutzungsdauerwarnung = wert;
}

void Alarm::setSollwertueberschreitungsalarm(bool status)
{
  Sollwertueberschreitungsalarm = status;
}

void Alarm::AnzeigenBenutzungsdauerwarnung() const
{
  if (Benutzungsdauerwarnung > 0) {
    cout << RED
      << "WARNUNG: Benutzungsdauer ueberschritten ("
      << Benutzungsdauerwarnung << " Minuten)"
      << RESET << endl;
  }
}

void Alarm::AnzeigenSollwertueberschreitungsalarm() const
{
  if (Sollwertueberschreitungsalarm) {
    cout << RED
      << "ALARM: Luftdruck-Sollwert ueberschritten!"
      << RESET << endl;
  }

}
