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
### Digitales Display
**Methoden**
- allesanzeigen( )
### Luftsteuerung 
**Methoden**
- Starten( )
- Stoppen( )

### Luftmengeverwaltung
**Attribute**
- Mengenmodus: Enum  ( opt1 = Wohnbereich; opt2 = Arbeitsbreich)
  
**Methoden**
- Auswaehlen( )
- Einstellen( )
- AnzeigenLuftdruck( )

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
[UMl-Diagrammd](/docs/Sprint_1/UMLDiagramm.pdf)

## Sequenzdiagramm 
[Sequenz-Diagramm](/docs/Sprint_1/Sequenzdiagramm.png)
## Kommunikationsdiagramm
[Kommunikationsdiagramm](/docs/Sprint_1/Kommukationsdiagramm.drawio.pdf)

## Testergebnis
|   ID     |     Testergebnis     |
| :------: | :-------------------:|
|    MT1   | PASS |
|    MT2   | PASS |
|    MT3   | PASS | 
|    IT1   | PASS |
|    IT2   | PASS |
|    IT3   | PASS |

## Retrospektive
- Abweichungen werden in folgenden Punkten dokumentiert
### Software-Design
- zusätzliche Attribute werden hinzugefügt
#### Digitales Display
**Attribute**
- static DigitalesDisplay* instance
- Luftsteuerung steuerung
- Luftmengeverwaltung menge

#### Luftsteuerung
**Attribute**
- aktiv: bool
  
**Methoden**
- bool IstAktiv() const
- void AnzeigenStatus() const
  
#### Luftmengeverwaltung
**Methoden**
- void SetModus(Mengenmodus m)
- Mengenmodus GetModus() const
- void AnzeigenModus() const

### UML Diagramm
- entsprechende Attribute werden angepasst
- [UML-Diagramm](/docs/Sprint_1/UMLDiagramm.drawio(geaerndert).pdf
)
### Kommunikationsdiagramm
- entsprechende Attribute werden angepasst
- [Kommunikationsdiagramm](/docs/Sprint_1/Kommukationsdiagramm.drawio(geaerndert).pdf)
### Baseline
- die dokumentierten Requirements im Sprint 1 wurde umgesetzt
- das Software Design fuer wurde detailierter (Attribute und Methoden) bearbeitet ( nur fuer die dokumentierten Requirements im Sprint 1)
- die 3 Diagramme werden anhand der Implementierung ueberbearbeitet
- alle Testfaelle waren erfolgreich

### Erkenntnisse
- jeder Klasse genauer bearbeiten, da mögliche zusätzliche Attribute sowie Methoden eingefügt werden
- die Implementierung werde ich genauer im Sprint 2 bearbeiten, damit ich den Ablauf zwischen verschiedene Klassen anschauen kann
- die Methoden (Visuale Studio, Git Bash, ZenUML und draw.io) werde ich weiterhin verwenden



