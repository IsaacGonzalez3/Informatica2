// PWM_ESP32.h

#ifndef _PWM_ESP32_h
#define _PWM_ESP32_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class PWM
{
public:
	PWM();
	~PWM();
	void setup(uint8_t pin, float frequency, uint8_t channel, uint8_t resolucion_bits);
	void setPWM(float duty_cycle);
	void setFrequency(float frequence);
protected: 
	uint8_t _pin;
	float _duty_cycle;
	uint32_t _resolucion_bits;
	float _frecuencia;
	uint8_t _channel;
	uint16_t _resolucion;
};


#endif

