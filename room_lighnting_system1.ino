int LightSensorVal = 0;

int PIRSensorVal = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  LightSensorVal = analogRead(A0);
  PIRSensorVal = digitalRead(2);
  
  if (LightSensorVal < 600) {
    if (PIRSensorVal == HIGH) {
      digitalWrite(8, HIGH);
      delay(1000);
    } else {
      digitalWrite(8, LOW);
      delay(1000);
    }
  } else {
    digitalWrite(8, LOW);
  }
}