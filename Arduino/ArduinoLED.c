/*
  For now, the light source that the Raspberry Pi light switch will be
  manipulating is an LED on an Arduino. Here is the code:
*/

int ledPin = 13;

void setup() 
{
   // Put your setup code here, to run once:
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}

void loop()
{
   char in;
   if(Serial.available())
   {      
      in = Serial.read();
      if (in == '0')
      {
         digitalWrite(ledPin, LOW);
      }
      else if (in == '1')
      {
         digitalWrite(ledPin, HIGH);
      }
   }
   delay(100);
}
