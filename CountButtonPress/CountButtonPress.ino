const int buttonPin = PUSH2;

int buttonState = 1;
int new_buttonState = 0;
float PressCount = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  // Read the latest state of button.
  new_buttonState = digitalRead(buttonPin);
  
  // Each press would cause two changes in the button state (press, and release)
  // so here we add 0.5 instead of 1, so that each press process (press & release) would add 1.
  if (new_buttonState != buttonState) {
    PressCount = PressCount + 0.5;
  }
  
  // Print the count of button press
  Serial.println(PressCount);
  
  // Assign this so that we can compare to check if the state of button changed.
  buttonState = new_buttonState;
  
}
