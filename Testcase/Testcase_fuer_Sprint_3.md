| ID | Beschreibung | Vorbedingung | Aktion | gewünschtes Ergebnis | 
|----|--------------|--------------|--------|----------------------|
| MT7 | Initialisierung des Alarm-Objekts | Objekt Alarm existiert | Konstruktor Alarm() aufrufen | Keine Warnung und kein Sollwertalarm aktiv | 
| MT8 | Setzen der Benutzungsdauerwarnung | Alarm-Objekt ist initialisiert | setBenutzungsdauerwarnung(180) aufrufen | Benutzungsdauerwarnung wird gespeichert |
| MT9 | Setzen des Sollwertüberschreitungsalarms | Alarm-Objekt ist initialisiert | setSollwertueberschreitungsalarm(true) aufrufen | Sollwertalarm ist aktiv | 

