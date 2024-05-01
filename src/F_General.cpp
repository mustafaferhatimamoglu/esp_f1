
#include <Arduino.h>
// #include "F_General.h"

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

int timeTick = 0;
int get_TimeTick()
{
    return timeTick;
}
void TimeTicker(void *pvParameters)
{
    while (1)
    {
        timeTick++;
        delay(1000);
    }
}
void Setup_TimeTicker()
{
    xTaskCreatePinnedToCore(
        TimeTicker,   // Function to implement the task
        "TimeTicker", // Name of the task
        10000,        // Stack size in bytes
        NULL,         // Task input parameter
        10,           // Priority of the task
        NULL,         // Task handle.
        0             // Core where the task should run
    );
}