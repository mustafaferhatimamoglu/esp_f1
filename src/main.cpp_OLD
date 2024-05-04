#include <Arduino.h>
//A8:42:E3:56:E0:08   

#include "F_General.h"

#include "WiFi.h"

void setup()
{
  Setup_Serial();
  Setup_TimeTicker();

    WiFi.mode(WIFI_MODE_STA);
  Serial.println(WiFi.macAddress());
}
void loop()
{
  Serial.println(get_TimeTick());
  delay(3000);
}
