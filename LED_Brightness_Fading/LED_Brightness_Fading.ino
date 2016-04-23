int brightness = 0;    // how bright the LED is
int fadeAmount = 3;    // how many points to fade the LED by



void setup()  { 
  // If we use analogWrite or analogRead,
  // there is no need to use pinMode().
  

} 

void loop()  { 
  // set the brightness of pin 9:
  analogWrite(GREEN_LED, brightness);


  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;


  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount; 
  }     

  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}
