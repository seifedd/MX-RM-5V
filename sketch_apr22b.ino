/*RF code 
 * SEIFEDDINE MEJRI -22/04/2017
 * m2m project MACHINEATTACK
 * Transmitter code RF rx
 */
//Library 
#include "VirtualWire.h"
byte messageLength=VW_MAX_MESSAGE_LEN;//the size of the message received
byte message[VW_MAX_MESSAGE_LEN];//a buffer to store the incoming message 
int j=0;
int ledPin=8;
void setup() {
  Serial.begin(9600);                  //arduino usb serial communication  bps
  Serial.println("device is ready...");
  //virtual library RF setup
  vw_set_rx_pin(11);//RXpin
  vw_setup(4000); //bps
  //init ledPin 8
  pinMode(ledPin, OUTPUT);
  vw_rx_start();
}

void loop() {
  if(vw_get_message(message, &messageLength)){
    digitalWrite(LED_BUILTIN, HIGH); 
 
    Serial.print("received: ");
    for(int i=0;i<messageLength;i++){
    Serial.write(message [i]);
   
    }
    j++;
    Serial.println(j);
    digitalWrite(LED_BUILTIN, LOW);
    
 }

}
