/*
	Led.h - Library for a easy led handle
	Created by Alessandro Lauria, October 8, 2018
	Released into the public domain
*/

#include "Arduino.h"
#include "Led.h"

Led::Led(int pin){
	pinMode(pin,OUTPUT);
	_pin=pin;
}

void Led::on(){
	digitalWrite(_pin,HIGH);
}

void Led::off(){
	digitalWrite(_pin,LOW);
}