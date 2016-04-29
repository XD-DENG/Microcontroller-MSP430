

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600); // msp430g2231 must use 4800
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    Serial.println("===============");
  // read the input on analog pin A3 ad A4:
  int sensorValue_1 = analogRead(A3);
  int sensorValue_2 = analogRead(A4);

  
  // print out the value you read:
  //Serial.println(voltage);
  Serial.println(sensorValue_1);
  Serial.println(sensorValue_2);
  Serial.println("--------------");
  
  // this is a threshold which helps determine if the light from two directions are different significantly
  // this need to be adjusted accroding to the environment
  float difference_threshold = 1.1; 
 
  if(sensorValue_1 > difference_threshold * sensorValue_2){
    Serial.println("Left");
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH); 
  }else if(sensorValue_2 > difference_threshold * sensorValue_1){
    Serial.println("Right");
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH); 
  } else{
    Serial.println("Forward");
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, LOW); 
  }

  delay(50);
}
