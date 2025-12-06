# Sprint 2
Im zweiten Sprint soll das Software-Design für die bearbeiteten Requirements überarbeitet wird, das Klassen- und Kommunikationsdiagram wird ebenfalls überarbeitet. Die untergegebenen Requirements sollen umgesetzt werden, um die Funktionalität der Luftsteuerung zu erreichen. Hierfür werden folgende Punkte genannt.

## Folgende Requirements sind zum Bearbeiten 
- Reg 3.1: Überwachung des Luftdrucks
- Reg 3.2: Anzeige der aktuellen Luftmenge
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
[Software-Architektur](/docs/System Komponenten .pdf)

## UML-Diagramm 
[UMl-Diagramm](/docs/Sprint_1/UMLDiagramm.pdf)

## Kommunikationsdiagramm
[Kommunikationsdiagramm](/docs/Sprint_1/Kommukationsdiagramm.drawio.pdf)

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
- AnzeigenDauer() : void

### UML Diagramm
- entsprechende Attribute werden angepasst
- [UML-Diagramm](/docs/Sprint_2/UMLDiagramm.drawio(geaerndert2).pdf)
### Kommunikationsdiagramm
- entsprechende Attribute werden angepasst
- [Kommunikationsdiagramm](/docs/Sprint_2/Kommukationsdiagramm.drawio(geaerndert2).pdf)
### Baseline
- die dokumentierten Requirements im Sprint 2 wurde umgesetzt
- das Software Design fuer wurde detailierter (Attribute und Methoden) bearbeitet ( nur fuer die dokumentierten Requirements im Sprint 2)
- die 2 Diagramme (UML- & Kommunikationsdiagramm) werden anhand der Implementierung ueberbearbeitet
- alle Testfaelle waren erfolgreich

### Erkenntnisse
- jeder Klasse genauer bearbeiten, da mögliche zusätzliche Attribute sowie Methoden eingefügt werden
- die Implementierung werde ich genauer im Sprint 3 bearbeiten, damit ich den Ablauf zwischen verschiedene Klassen anschauen kann
- die Methoden (Visuale Studio, Git Bash, ZenUML und draw.io) werde ich weiterhin verwenden


