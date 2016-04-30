// This code is one part of the small project "LightPursuer".


// Will read input on analog from these two pins.
// they are conneted to two photocell circuits
const int photocell_IN_Pin_1 = A3;
const int photocell_IN_Pin_2 = A4;

// these two pins below will be used as output to control mechanism part.
const int OUT_Pin_1 = A0;
const int OUT_Pin_2 = A6;

// This is a threshold which helps determine if the light from two directions are different significantly
// It need to be adjusted accroding to the environment
const float difference_threshold = 1.1; 

// delay time in each loop
const int delay_time = 10;

void setup() {
  // initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  pinMode(OUT_Pin_1, OUTPUT);
  pinMode(OUT_Pin_2, OUTPUT);
}


void loop() {
  Serial.println("===============");
  // read the input on analog from two pins:
  int sensorValue_1 = analogRead(photocell_IN_Pin_1);
  int sensorValue_2 = analogRead(photocell_IN_Pin_2);

  
  // print out the analog value:
  Serial.println(sensorValue_1);
  Serial.println(sensorValue_2);
  Serial.println("--------------");
  
 
  if(sensorValue_1 > difference_threshold * sensorValue_2){
    Serial.println("Left");
    
    digitalWrite(OUT_Pin_2, LOW);
    digitalWrite(OUT_Pin_1, HIGH); 

  }else if(sensorValue_2 > difference_threshold * sensorValue_1){
    Serial.println("Right");

    digitalWrite(OUT_Pin_2, HIGH);
    digitalWrite(OUT_Pin_1, LOW); 
    
  } else{
    Serial.println("Forward");
    
    digitalWrite(OUT_Pin_1, LOW);
    digitalWrite(OUT_Pin_2, LOW);
  }

  delay(delay_time);
}
