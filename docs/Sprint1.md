# Sprint 1
Im ersten Sprint soll das grundlegende Software-Design erstellt werden und in Form eines Klassen-, Sequenz- und Kommunikationsdiagramms dokumentiert werden. Die untergegebenen Requirements sollen umgesetzt werden, um die Funktionalität der Luftsteuerung zu erreichen. Hierfür werden folgende Punkte genannt.

## Folgende Requirements sind zum Bearbeiten:
 - Req 0.1 : Programmiersprache C++
 - Req 0.2 : Laufbar unter Windows 11
 - Req 0.3 : Variablen/Kommentare in Englisch
 - Req 0.4 : Lesbare Schrift im UI
 - Req 1.1 : Steuerung starten
 - Req 1.2 : Steuerung stoppen
 - Req 2.1 : Luftmengemodusauswahl (1. Option: im Wohnbereich; 2. Option: Büro-& Arbeitsbereich)
 - Req 2.2 : Einstellung Luftmenge je Modus ( 1. 20 m3/h im Wohnbereich; 2. 36 m3/h im Arbeitsbereich)
 - Req 2.3 : Anzeige des eingestellten Luftdrucks
 - Req 2.4 : Begrenzung der Luftmenge nach Modus 

## Software Design 
### Luftsteuerung 
**Methoden**
- Starten( )
- Stoppen( )

### Luftmengeverwaltung
**Attribute**
- Mengenmodus: Enum  ( opt1 = Wohnbereich; opt2 = Arbeitsbreich)
  
**Methoden**
- Auswaehlen( )
- Auswaehlensonstiges( )
- Einstellen( )
- AnzeigenLuftdruck( )
- BegrenzenLuftmenge( )


### Luftdruckueberwachung
**Attribute**
- aktuellerLuftdruckwert: int
- Luftdrucksollwert: int
  
**Methoden**
- AnzeigenaktuellenLuftdruckwert( )
- AnzeigenLuftdrucksollwert( )

### Dauerverwaltung
**Attribute**
- Atemfrequenz: int
- Benutzungsdauerauswahl: Enum
  
**Methoden**
- AnzeigenAtemfrequenz( )
- Auswahlbenutzungsdauer( )
- AnzeigenBenutzungsdauer( )
  
### Alarm
**Attribute**
- Benutzungsdauerwarnung: int
- Sollwertueberschreitungsarlam: bool
   
**Methoden**
- AnzeigenBenutzungsdauerwarung( )
- AnzeigenSollwertueberschreitungsalarm( )

## Traceability 
[Traceabilty-Matrix](/docs/TraceabilityMatrix.pdf)

## UML-Diagramm
[UMl-Diagramm](/docs/UMLDiagramm.pdf)

## Sequenzdiagramm 

## Kommunikationsdiagramm

