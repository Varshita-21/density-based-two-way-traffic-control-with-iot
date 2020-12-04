void setup()
{
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{ 
  if(digitalRead(7) == LOW && digitalRead(6)==LOW && digitalRead(4)!=LOW ) 
  {
     signal1Function();
  }
  else if(digitalRead(5) == LOW && digitalRead(4)==LOW && digitalRead(6)!=LOW )
  {
    signal2Function();
  }
  else if(digitalRead(7) == LOW && digitalRead(6)==LOW && digitalRead(5) == LOW && digitalRead(4)==LOW)
  {
     singal3Function();
  }
  else
  {
   signalFunction();
  }
}
  void signal1Function()
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(10000);
  }
  void signal2Function()
  {
    digitalWrite(13,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(10000);
  }
void singal3Function()
{
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(7000);
    digitalWrite(13,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    delay(10000);
}
  void signalFunction()
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(10, HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    delay(2000); // Wait for 2000 millisecond(s)
  }
