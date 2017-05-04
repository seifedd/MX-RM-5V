# MX-RM-5V
a simple RF Transmitter-receiver module , Which is used in Remote control for cars , or to control simple tasks , like control relay on/off.
# Parts Required
  2 x Arduino UNO or compatible boards
  Breadboard
  Wires
  RF Module (433 Mhz) - Transmitter and Receiver pair or the 315 Mhz version

  The receiver has 4 pinouts :

    GND
    VCC(3-5V I think) but I used 5V.
    2 DATA pins.
    
  The transmitter has 3 pinouts :
  
     GND
     VCC   
     DATA
     
     A picture is provided.
     
 # Pin connection with Arduino Uno or compatible boards:
   
   RX:
   
   GND  <--->GND
   VCC <---> 5V
   DATA(next to VCC) <--->pin 11
   the other pin shouldn't be connected.
   
   TX:
   
   GND  <--->GND
   VCC <---> 5V
   DATA <--->pin 12
   
   
   
    http://www.instructables.com/id/433-MHz-Coil-loaded-antenna/
