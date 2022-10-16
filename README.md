# Lamp-cube (2019)

## Description
Cube-shaped dimmable bluetooth lamp. The lamp was intended as a "mood lamp" that shines with a warm and cozy light. User can adjust the brightness via a bluetooth connection.<br />
The cube is powered from 230V. A commercial switching-regulator regulates the voltage to 12VDC which is used by the LED-strip. A LM7805-regulator regulates the voltage further to 5V. This 5V powers the microcontroller and bluetooth-module.

### LED-regulation
The user can adjust the brightness of the LED-strip via any general "bluetooth remote"-app. The values sent from the phone (0-100) gets mapped to PWM-values and sent from the microcontroller to a regulating mosfet. 

### PCB
PCB designed in EasyEDA and ordered from JLCPCB. Design files in project repository.

### Frame
The frame consist of a wooden base and a milk-white shade made out of plexiglass.

## Reflections
This project did not include complicated electronics, but the frame was labour-intensive. Plexi-glass is not the easiest material to work with, especially not without proper equipment.<br /> 
In hindsight, there isn't much I would change. One problem I ran into was the commercial switching-regulator heating up. This could be solved by using a regulator rated for a higher wattage, but the best solution would be designing my own regulating circuit. This would reduce the overall cost and make it possible to include everything on the same PCB, therefore saving space. The reason for choosing a commercial solution was the limited experience I had with mains voltage at the time.   
