/*
 * AUTHOR: Markus Andersson
 * FUNCTION: A BT controlled lampcube that uses a phonedimmer 
 * *  * * * and a hc-06 BT-module
 * LAST EDITED: 13.3.2020
 */



#include<SoftwareSerial.h>
const int btled = 7;
const int btstat = 6;
const int led = 5;
int pwm = 0;



SoftwareSerial bt(2, 3); // Name of the BT-module(tx,rx)


void setup(){
  Serial.begin(9600);
  bt.begin(9600); // Modules baud rate
  pinMode(led, OUTPUT); 
  pinMode(btled, OUTPUT);
  pinMode(btstat, INPUT);
}

void loop(){
  while(bt.available()>0){ // If there is available data
    pwm = bt.parseInt(); // Returns the ASCII-data as decimal
    pwm = map(pwm , 0, 100, 0, 255);
    analogWrite(led, pwm);
    //Serial.println(pwm);
  }
  /*if (bt.available()){
    Serial.write(bt.read());
  }                                  These functions are used in communication checks
  
  if(Serial.available()){
    bt.write(Serial.read()); 
  }*/

  if(digitalRead(btstat) == LOW && pwm == 0){ // If the modules led is LOW the btstat is HIGH and vice versa
    digitalWrite(btled, HIGH);
  }
  
  if(digitalRead(btstat) == HIGH || pwm >= 0){
    digitalWrite(btled, LOW);
  }
  
  
}
