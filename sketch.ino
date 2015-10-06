/****************************************************************************
 RoboTerraLEDDemo.ino
 Copyright (c) 2015 ROBOTERRA, Inc. All rights reserved.

 Description
 An example of how to use RoboTerraLED Class

 ****************************************************************************/

#include "ROBOTERRA.h"

RoboTerraLED myLED;

void setup() {
	Serial.begin(9600);
	Serial.println("LED demo initiated...");
	myLED.attach(13);

}

void loop() {

	myLED.fastBlink();

}
