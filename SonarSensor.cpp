#include "SonarSensor.h"
#include <Arduino.h>

SonarSensor::SonarSensor(int _trig, int _echo)
{
    /* set pin */
    this->trig = _trig;
    this->echo = _echo;
    /* pin config */
    pinMode(this->trig, OUTPUT);
    pinMode(this->echo, INPUT);
}

int SonarSensor::getDistance()
{
    digitalWrite(this->trig, LOW);
    delayMicroseconds(2);
    digitalWrite(this->trig, HIGH);
    delayMicroseconds(5);
    digitalWrite(this->trig, LOW);
    unsigned long duration = pulseIn(echo, HIGH);
    return (duration / 2 / 29.412);
}


