|   ID     |    Beschreibung    |      Vorbedingung     |     Aktion     |     gewünschtes Ergebnis    | 
| :------: | :----------------: | :-------------------: | :------------: | :--------------------------: | 
|    MT4   | Luftdruck-Alarm bei Ueberdruck | Sollwert = 18, aktueller Wert = 25 | Alarm1() | Rueckgabe = true| 
|    MT5   | Auswahl der Benutzungsdauer | Dauerverwaltung esxistiert | Auswahlbenutzungsdauer(180) | Enum = "Min180" wird umgesetzt | 
|    MT6   | Atemfrequenz anzeigen | Atemfrequenz = 12 | AnzeigenAtemfrequenz() | Ausgabe = 12 |
|    IT4   | Alarmweitergabe an Alarm-Modus | Luftdruckuberwachung + Alarm existieren | Alarm1() -> Alarm uebernehmen | Alarm wird angezeigt
|    IT5   | Benutzungsdauer beeinflusst Start des Systems | Dauerverwaltung waehlt 360 min | Dauerverwaltung setzen | Luftsteuerung startet
|    IT6   | Dauer zu lang -> Alarm2 aktiv | Dauerverwaltung + Alarm existieren, Warmlimit 180 | Auswahlbenutzungsdauer(360) -> Alarm2() |Alarm = true |

