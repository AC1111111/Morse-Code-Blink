// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  //A
  dot();
  dash();
  
  //D
  dash();
  dot();
  dot();
  
  //I
  dot();
  dot();
  
  //T
  dash();
  
  //Y
  dash();
  dot();
  dash();
  dash();
  
  //A
  dot();
  dash();
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
}
  
