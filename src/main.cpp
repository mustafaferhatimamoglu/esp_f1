#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void Setup_Serial()
{
  int counter_ss = 0;
  Serial.begin(115200);
  while (!Serial)
  {
    delay(1000);
    counter_ss++;
  }
  Serial.printf("[%d] Debug_SS!\n", counter_ss);
}
void setup()
{
  Setup_Serial();
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}
int i = 0;
void loop()
{
  // put your main code here, to run repeatedly:

  printf("[%d] Hello world!\n", i);
  // Serial.println("asd");
  i++;
  delay(100);
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}