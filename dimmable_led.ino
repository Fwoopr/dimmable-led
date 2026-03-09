int potPin=A0;
int LEDPin=3;
int potVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(LEDPin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(LEDPin,LEDVal);
  Serial.println(LEDVal);
}
