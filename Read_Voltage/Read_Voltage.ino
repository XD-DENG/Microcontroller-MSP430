//under test

int analogPin = A3;     // pin A3 will be used to connect to external voltage
                       // outside leads to ground and ~3V
float val = 0;           // variable to store the value read

void setup()
{
  Serial.begin(9600);          //  setup serial
}

void loop()
{
  val = analogRead(analogPin);    // read the input pin
  Serial.println(val);             // debug value
}
