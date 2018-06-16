#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trigPin, int echoPin)
{
	pinMode(trigPin, OUTPUT);
	_trigPin = trigPin;
	
	pinMode(echoPin, INPUT);
	_echoPin = echoPin;
}

int Ultrasonic::checkDistance()
{
	// Clears the trigPin
	digitalWrite(_trigPin, LOW);
	delayMicroseconds(2);
	// Sets the trigPin on HIGH state for 10 micro seconds
	digitalWrite(_trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trigPin, LOW);
	// Reads the echoPin, returns the sound wave travel time in microseconds
	long duration = pulseIn(_echoPin, HIGH);
	// Calculating the distance
	int distance = duration*0.034/2;
	
	return distance;
}