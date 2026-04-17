#include <Arduino.h>

const int INCREASE = 34;
const int DECREASE = 35;

const int LEDS_PORT[3] = {21, 19, 18};

int LED_Status = 0b000;



void setup()
{
	Serial.begin(115200);
	pinMode(INCREASE, INPUT);
	pinMode(DECREASE, INPUT);

	for (const auto &led : LEDS_PORT)
		pinMode(led, OUTPUT);
}

void active_led()
{
	for (int i = 0; i < 3; i++)
	{
		int status = LED_Status >> i;
		status &= 1;

		if (status)
			digitalWrite(LEDS_PORT[i], HIGH);
		else
			digitalWrite(LEDS_PORT[i], LOW);
	}
	delay(400);
}

void loop()
{
	int status_increase = digitalRead(INCREASE);
	int status_decrease = digitalRead(DECREASE);

	Serial.print("Status_Increase: ");
	Serial.println(status_increase);

	Serial.print("Status_Decrease: ");
	Serial.println(status_decrease);

	if (status_increase && status_decrease)
		return;

	if (status_increase && LED_Status == 7)
		return;
	if (status_decrease && LED_Status == 0)
		return;

	if (status_increase)
	{
		LED_Status += 1;

		active_led();
	}
	else if (status_decrease)
	{
		LED_Status -= 1;

		active_led();
	}

}
