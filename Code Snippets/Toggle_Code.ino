        /*Simple_PB_LED_V1   */

const byte LEDpin = 3;
const byte SWITCHpin = 2;
int status = false;

byte LEDstate = LOW;

void setup(){ 
   // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT); 
pinMode(SWITCHpin, INPUT_PULLUP);
}

void loop(){
// put your main code here, to run repeatedly: 
if (digitalRead(SWITCHpin) == true) { 
status = !status; 
digitalWrite(LEDpin, status); 
} 

while(digitalRead(SWITCHpin) == true); 
delay(50); // keeps a small delay 
}
