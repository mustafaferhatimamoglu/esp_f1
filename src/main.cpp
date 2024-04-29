#include <Arduino.h>

#include "F_General.h"

void setup()
{
  Setup_Serial();
  Setup_TimeTicker();
}
void loop()
{
  //Serial.println(get_TimeTick());
  delay(3000);
}
