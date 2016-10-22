#include <Arduino.h>
/*
  USBSerial_test

  It reads the incoming data from the Serial1 port and print the data on USB Serial port and vice versa.

  5 October 2016 by Vassilis Serasidis <avrsite@yahoo.gr>
  Home: http://www.serasidis.gr

 */

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(PC13, OUTPUT);
    Serial.begin(9600);
    Serial1.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
    int len;
    int i;

    len = Serial.available(); //Are incoming data on USB Serial port?
    if(len > 0){ //If yes, print the data on Serial1 port.
        for(i=0;i<len;i++)
            Serial1.write(Serial.read());
    }

    len = Serial1.available(); //Are incoming data on Serial1 port ?
    if(len > 0){ //If yes, print the data on USB Serial port.
        for(i=0;i<len;i++)
          Serial.write(Serial1.read());
    }
//    digitalWrite(PC13, HIGH);   // turn the LED on (HIGH is the voltage level)
//    delay(500);              // wait for a second
//    digitalWrite(PC13, LOW);    // turn the LED off by making the voltage LOW
//    delay(500);              // wait for a second
}


