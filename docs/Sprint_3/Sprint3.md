# Sprint 3
Im letzten Sprint soll das Software-Design für die letzten Requirements fertig überarbeitet wird, und somit ist das Software-Design komplett fertig, das Klassen- und Kommunikationsdiagram wird ebenfalls komplett fertig überarbeitet. Die untergegebenen Requirements sollen umgesetzt werden, um die restliche Funktionalität der Luftsteuerung zu erreichen, somit bin ich fertig mit dem Thema! Hierfür werden folgende Punkte genannt.

## Folgende Requirements sind zum Bearbeiten 
- Reg 0.5: Reaktionszeit <= 1s
- Reg 0.6: Alarmtext rot auf Display
- Reg 5.1: Alarm bei hohem/niedrigem Druck
- Reg 5.2: Alarm 15 min vom Zeitablauf

## Software Design
### Alarm
**Attribute**
- Benutzungsdauerwarnung: int
- Sollwertueberschreitungsarlam: bool
   
**Methoden**
- AnzeigenBenutzungsdauerwarung( )
- AnzeigenSollwertueberschreitungsalarm( )

## Traceability 
[Traceabilty-Matrix](/docs/TraceabilityMatrix.pdf)

## Software-Architektur
[Software-Architektur](/docs/Architektur.pdf)

## UML-Diagramm 
[UMl-Diagramm](/docs/Sprint_1/UMLDiagramm.pdf)

## Kommunikationsdiagramm
[Kommunikationsdiagramm](/docs/Sprint_1/Kommukationsdiagramm.drawio.pdf)

## Testergebnis 
|   ID     |     Testergebnis     |
| :------: | :-------------------:|
|    MT4   | PASS -> true |
|    MT5   | PASS -> true |
|    MT6   | PASS -> Ausgabe == 12 | 
|    IT4   | FAILED (Klasse Alarm wurde noch nicht implementiert) |
|    IT5   | PASS -> Startmeldung erscheint |
|    IT6   | FAILED (Klasse Alarm wurde noch nicht implementiert) |

## Retrospektive
- Abweichungen werden in folgenden Punkten dokumentiert
### Software-Design
- zusätzliche Attribute werden hinzugefügt
#### Alarm
**Methoden**

### UML Diagramm
- entsprechende Attribute werden angepasst
- [UML-Diagramm](/docs/Sprint_3/UMLDiagramm.drawio(geaendert3).pdf)
### Kommunikationsdiagramm
- entsprechende Attribute werden angepasst
- [Kommunikationsdiagramm](/docs/Sprint_3/Kommukationsdiagramm.drawio(geaendert3).pdf)
### Baseline
- die dokumentierten Requirements im Sprint 3 wurde umgesetzt
- das Software Design im Sprint 3 wurde detailierter (Attribute und Methoden) bearbeitet und somit wurde komplett fertig verbessert und ueberbearbeitet 
- die 2 Diagramme (UML- & Kommunikationsdiagramm) werden anhand der Implementierung fertig ueberbearbeitet
- fast alle Testfaelle waren erfolgreich, nur 2 Testfalle werden erst erfolgreich, wenn ich die Klasse Alarm im Sprint 3 implemetiere

### Erkenntnisse
- ich werde darauf beachten, dass ich fuer die Bearbeitung der Attribute und Methoden jeder Klasse immer genau anschaue und sicherstellen muss, dass keine Attibute sowie Methode fehlen
- es gab immer wiedr Fehlerauftritt waehrend des Prozess aber habe die Probleme erfolgreich behoben
- die Methoden (Visuale Studio, Git Bash, ZenUML und draw.io) werde ich weiterhin verwenden, da ich die Tools sehr weiterempfehle
