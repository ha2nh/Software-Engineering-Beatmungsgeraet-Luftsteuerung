# Sprint 3
Im letzten Sprint soll das Software-Design für die letzten Requirements fertig überarbeitet wird, und somit ist das Software-Design komplett fertig, das Klassen- und Kommunikationsdiagram wird ebenfalls komplett fertig überarbeitet. Die untergegebenen Requirements sollen umgesetzt werden, um die restliche Funktionalität der Luftsteuerung zu erreichen, somit bin ich fertig mit dem Thema! Hierfür werden folgende Punkte genannt.

## Folgende Requirements sind zum Bearbeiten 
- Reg 5.1: Überwachung des Luftdrucks
- Reg 5.2: Anzeige der aktuellen Luftmenge
- Reg 4.1: Einstellung der Benutzungsdauer
- Reg 4.2: Abgabe der Luft in Atemrhythmus

## Software Design
### Luftdruckueberwachung
**Attribute**
- aktuellerLuftdruckwert: int
- Luftdrucksollwert: int
  
**Methoden**
- Alarm1( )
- AnzeigenaktuellenLuftdruckwert( )
- AnzeigenLuftdrucksollwert( )

### Dauerverwaltung
**Attribute**
- Atemfrequenz: int
- Benutzungsdauerauswahl: Enum
  
**Methoden**
- Alarm2( )
- AnzeigenAtemfrequenz( )
- Auswahlbenutzungsdauer( )
- AnzeigenBenutzungsdauer( )

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
#### Luftueberwachung
**Methoden**
- SetAktuellenLuftdruckwert(): int
- SetLuftdrucksollwert(): void

#### Dauerverwaltung
**Methoden**
- getDauer() : int

### UML Diagramm
- entsprechende Attribute werden angepasst
- [UML-Diagramm](/docs/Sprint_2/UMLDiagramm.drawio(geaendert2).pdf)
### Kommunikationsdiagramm
- entsprechende Attribute werden angepasst
- [Kommunikationsdiagramm](/docs/Sprint_2/Kommukationsdiagramm.drawio(geaendert2).pdf)
### Baseline
- die dokumentierten Requirements im Sprint 2 wurde umgesetzt
- das Software Design fuer wurde detailierter (Attribute und Methoden) bearbeitet ( nur fuer die dokumentierten Requirements im Sprint 2)
- die 2 Diagramme (UML- & Kommunikationsdiagramm) werden anhand der Implementierung ueberbearbeitet
- fast alle Testfaelle waren erfolgreich, nur 2 Testfalle werden erst erfolgreich, wenn ich die Klasse Alarm im Sprint 3 implemetiere

### Erkenntnisse
- jeder Klasse genauer bearbeiten, da mögliche zusätzliche Attribute sowie Methoden eingefügt werden
- die Implementierung werde ich genauer im Sprint 3 bearbeiten, damit ich den Ablauf zwischen verschiedene Klassen anschauen kann
- die Methoden (Visuale Studio, Git Bash, ZenUML und draw.io) werde ich weiterhin verwenden
