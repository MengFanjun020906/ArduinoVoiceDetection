int val;
int ledpin=8;
int voicepin=6;
void setup() 
{
  Serial.begin(9600);
  pinMode(voicepin,INPUT);
  pinMode(ledpin,OUTPUT);
}
 
void loop()
{
    val = digitalRead(voicepin);
    Serial.println(val); 
    delay(500);
    digitalWrite(ledpin,HIGH);
    if (val == LOW) // no voice
    {
      digitalWrite(ledpin,LOW); // clear led
    } else {
      digitalWrite(ledpin,HIGH); // set led
    }
}
