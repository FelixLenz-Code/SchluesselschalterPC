# Schlüsselschalter an PCs
#### Hoch- und Herunterfahren von PCs mit Schlüssel

## Hardware
Für dieses Projekt braucht man einen Schlüsselschalter, Arduino Nano und zwei 230V Relais. Zudem zwei Projektboxen zum unterbringen der Technik. 

In der Zeichnung stehen die LEDs für die Relais und der Taster steht für den Schlüsselschalter. Halte dich einfach beim verkabeln an die Zeichnung.

Der Schlüsselschalter wird an Pin 2 angeschlossen. An Pin 13 und 12 werden die Relais angeschlossen.

![Zeichnung](https://github.com/FelixLenz-Code/SchluesselschalterPC/blob/main/Zeichnung.jpg "Zeichnung")

[**Tinkercad Simulation**](https://www.tinkercad.com/things/5atuWxaf2au "Tinkercad Simulation")

## Software
Das Arduino Programm schaltet die Steckdosenleiste ein um z.B. Bildschirme mit einzuschalten. Das andere Relais emuliert den Tastendruck am PC Gehäuse. **Funktioniert also nur mit PCs nicht mit Laptops oder versiegelten PCs**
