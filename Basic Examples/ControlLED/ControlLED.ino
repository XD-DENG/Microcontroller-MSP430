void setup()
{
  Serial.begin(9600); 
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop()
{
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH); 
    delay(1000);
    
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH); 
    delay(1000);
    
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, LOW); 
    delay(1000);
}
