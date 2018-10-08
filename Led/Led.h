/*
	Led.h - Library for a easy led handle
	Created by Alessandro Lauria, October 8, 2018
	Released into the public domain
*/

#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led{
	public:
		Led(int pin);
		void on();
		void off();
	private:
		int _pin;
};

#endif


