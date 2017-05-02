/*RF code 
 * SEIFEDDINE MEJRI -22/04/2017
 * m2m MACHINEATTACK
 * Transmitter code RF tx
 */
//LIBRARY 
# include <VirtualWire.h>


void setup() {
 Serial.begin(9600);

 //IO wires 
 vw_set_tx_pin(12);// TX pinout
 vw_setup(8000);
}

void loop() {
  sendString("message",true);
  delay(100);
}

void sendString(String message,bool wait){
byte messageLength=message.length()+1;
char charBuffer[messageLength];
message.toCharArray(charBuffer,messageLength);

vw_send((uint8_t *)charBuffer,messageLength);

if (wait)vw_wait_tx();

Serial.println("sent:"+ message);



}


