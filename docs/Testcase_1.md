|   ID     |    Beschreibung    |      Vorbedingung     |     Aktion     |     gewünschtes Ergebnis     |     Testergebnis     |
| :------: | :----------------: | :-------------------: | :------------: | :--------------------------: | :-------------------:|
|    MT1   | Luftsteuerung starten | Objekt "Luftsteuerung" existiert, aktiv == false | ls.Starten() | aktiv == true | Bestanden |
|    MT2   |    Modus wechseln     | modus == Wohnbereich | lm.SetModus(Arbeitsbereich) |modus == Arbeitsbereich | Bestanden |
|    MT3   | Luftdruck setzen & auslesen | Druckwerte = 0 | dr.setAktuellenDruck(30) dr.setSollDruck(50) | aktuelle Druckwerte korrekt | Bestanden | 
|    IT1   | Digitales_Display startet Luftsteuerung | Display existiert, Steuerung inaktiv | d->SystemStarten() | steuerung.aktiv == true | Bestanden |
|    IT2   | Allesanzeigen() läuft ohne Fehler | Display + Module existieren | d->allesanzeigen() | Keine Exceptions / keine Abstürze | Bestanden |
|    IT3   | Modus ändern + Anzeige | Modus = Wohnbereich | menge.SetModus(Arbeitsbereich) -> d->allesanzeigen() | Anzeige zeigt "Arbeitsbereich" | Bestanden |
