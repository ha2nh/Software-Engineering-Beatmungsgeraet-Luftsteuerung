| ID | Beschreibung | Vorbedingung | Aktion | gewünschtes Ergebnis | 
|----|--------------|--------------|--------|----------------------|
| MT7 | Initialisierung des Alarm-Objekts | Objekt Alarm existiert | Konstruktor Alarm() aufrufen | Keine Warnung und kein Sollwertalarm aktiv | 
| MT8 | Setzen der Benutzungsdauerwarnung | Alarm-Objekt ist initialisiert | setBenutzungsdauerwarnung(180) aufrufen | Benutzungsdauerwarnung wird gespeichert |
| MT9 | Setzen des Sollwertüberschreitungsalarms | Alarm-Objekt ist initialisiert | setSollwertueberschreitungsalarm(true) aufrufen | Sollwertalarm ist aktiv |
| IT7 | Alarm bei Luftdrucküberschreitung | Sollwert = 18 mbar | setAktuellenLuftdruckwert(22), Alarm1(), Übergabe an Alarm | Sollwertüberschreitungsalarm wird aktiv | Durchgeführt – Bestanden |
| IT8 |  Warnung bei Benutzungsdauer | Dauerverwaltung ist initialisiert | AuswahlBenutzungsdauer(3) → Übergabe an Alarm | Benutzungsdauerwarnung wird gesetzt | 
| IT9 | Anzeige des Alarms im Display | Alarm ist aktiv | allesanzeigen() aufrufen | Alarm wird rot im Display angezeigt | 


