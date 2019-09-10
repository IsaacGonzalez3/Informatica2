// 
// 
// 

#include "_isaac_alex_tarjeta.h"


Tarjeta::Tarjeta():battery(BATTERY_PIN, 12, 3.3f), led(LED_BUILTIN, LOW)
{
	led.setLED(ON);
}

Tarjeta::~Tarjeta()
{
}

uint8_t Tarjeta::readBattery()
{
	uint8_t battery_level = (battery.readRaw() - 1940) / 6;
	return battery_level;
}