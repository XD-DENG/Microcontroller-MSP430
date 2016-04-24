
const int buttonPin = PUSH2;     // the number of the pushbutton pin
const int ledPin =  RED_LED;      

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);    
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  if (buttonState == LOW) {      
   analogWrite(ledPin, 1000);  
    Serial.println(1);
  } 
  else {
    analogWrite(ledPin, 0); 
    Serial.println(0);
  }

}
