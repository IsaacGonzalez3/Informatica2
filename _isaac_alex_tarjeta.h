// _isaac_alex_tarjeta.h

#ifndef __ISAAC_ALEX_TARJETA_h
#define __ISAAC_ALEX_TARJETA_h


#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "ADC_Read.h"
#include "LED_Handler.h"

#define LED_BUILTIN 15
#define BUTTON_BUILTIN 0
#define BATTERY_PIN 36

class Tarjeta
{
public:
	Tarjeta();
	~Tarjeta();
	LED led;
	uint8_t readBattery();
private:
	ADCRead battery;
};

#endif

