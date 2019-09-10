// 
// 
// 

#include "PWM_ESP32.h"

PWM::PWM()
{
}

PWM::~PWM()
{
}

void PWM::setup(uint8_t pin, float frequency, uint8_t channel, uint8_t resolucion_bits)
{
	_pin = pin;
	_channel = channel;
	_frecuencia = frequency;
	_resolucion_bits = resolucion_bits;
	_resolucion = pow(2, resolucion_bits);
	pinMode(_pin, OUTPUT);
	ledcSetup(_channel, _frecuencia, _resolucion_bits);
	ledcAttachPin(_pin, _channel);
}

void PWM::setPWM(float duty_cycle)
{
	if (duty_cycle > 100) duty_cycle = 100;
	if (duty_cycle < 0) duty_cycle = 0;

	_duty_cycle = duty_cycle;
	ledcWrite(_channel, _resolucion * _duty_cycle / 100);
}

void PWM::setFrequency(float frequence)
{
	_frecuencia = frequence;
	ledcWriteTone(_channel, _frecuencia);
}
