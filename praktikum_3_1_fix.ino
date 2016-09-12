void setup()
{
  DDRB=0b1111;
  DDRC=0b0000;
  PORTC=0b1111;
}
void loop()
{
  if (digitalRead(A0)==LOW)
  {
  counterup();
  delay(1000);
  }
  if(digitalRead(A1)==LOW)
  {
    counterdown();
    delay(1000);
  }
  if(digitalRead(A2)==LOW)
  {
    reset();
  }
}

void counterup()
{
  PORTB = PORTB + 1;
}
void counterdown()
{
  PORTB = PORTB - 1;
}
void reset()
{
  PORTB = 0;
}



  
