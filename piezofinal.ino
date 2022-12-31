int sensoroutput = 3; // the analog pin connected to the sensor
int ledoutput = 2; // pin connected to LED
int THRESHOLD = 100;
void setup()
{
pinMode(ledoutput, OUTPUT);   // this function is used to declare led connected pin as output
}
void loop()
{
int value = analogRead(sensoroutput);  // function to read analog voltage from sensor
if (value >= THRESHOLD)                    // function to check voltage level from sensor
{
digitalWrite(ledoutput, HIGH);
delay(1000); // to make the LED visible
}
else
digitalWrite(ledoutput, LOW);
}
