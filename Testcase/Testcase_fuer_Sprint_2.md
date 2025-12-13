|   ID     |    Beschreibung    |      Vorbedingung     |     Aktion     |     gewünschtes Ergebnis    | 
| :------: | :----------------: | :-------------------: | :------------: | :--------------------------: | 
| MT4 | Initialisierung der Dauerverwaltung | Objekt Dauerverwaltung existiert | Konstruktor Dauerverwaltung() aufrufen | Atemfrequenz = 12, Benutzungsdauer = 60 Minuten | 
| MT5 | Auswahl der Benutzungsdauer | MT-01 erfolgreich durchgeführt | AuswahlBenutzungsdauer(2) aufrufen | Benutzungsdauer wird auf 180 Minuten gesetzt |
| MT6 | Auswahl Luftmengen-Modus | Objekt Luftmengeverwaltung existiert | Modus Wohnbereich auswählen | Modus wird korrekt gesetzt |
| IT4 | Benutzerkonfiguration über Display | Digitales Display ist initialisiert | Benutzer wählt Modus & Dauer | Einstellungen werden korrekt übernommen | 
| IT5 | Systemstart nach Konfiguration | IT-01 & MT-01 erfolgreich durchgeführt | SystemStarten() aufrufen | Luftsteuerung ist AKTIV | 
| IT6 | Anzeige aller Systemeinstellungen | IT-01 & IT-02 erfolgreich durchgeführt | allesanzeigen() aufrufen | Alle Einstellungen werden angezeigt |
