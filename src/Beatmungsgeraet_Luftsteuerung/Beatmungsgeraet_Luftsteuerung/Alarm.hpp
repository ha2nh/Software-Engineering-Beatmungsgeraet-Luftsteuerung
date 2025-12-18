#ifndef ALARM_HPP
#define ALARM_HPP

class Alarm {
private:
  int Benutzungsdauerwarnung;      // Minuten
  bool Sollwertueberschreitungsalarm;

public:
  Alarm();

  // Setter (werden von Dauerverwaltung / Luftdruckueberwachung genutzt)
  void setBenutzungsdauerwarnung(int wert);
  void setSollwertueberschreitungsalarm(bool status);

  // Anzeige-Methoden (werden vom Digitalen Display genutzt)
  void AnzeigenBenutzungsdauerwarnung() const;
  void AnzeigenSollwertueberschreitungsalarm() const;
};

#endif
