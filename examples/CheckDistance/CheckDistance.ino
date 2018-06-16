#include <Ultrasonic.h>

Ultrasonic sonic(9,10);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(sonic.checkDistance());
	delay(2000);
}