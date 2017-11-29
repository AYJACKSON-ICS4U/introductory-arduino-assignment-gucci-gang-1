const byte LEDpin = 3;
const byte SWITCHpin = 2;

byte LEDstate = HIGH;
byte SWITCHstate;
byte previousSWITCHstate;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}

unsigned long previous = millis();
const long interval = 100;

void loop() {
  // put your main code here, to run repeatedly:
  
SWITCHstate = digitalRead(SWITCHpin);
if ((previousSWITCHstate == HIGH) && (SWITCHstate == LOW) && (millis() - previous >= interval))
{
    
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
    //delay(millis() - previous);
    
    previous = millis();
}
  
  previousSWITCHstate = SWITCHstate;
}
