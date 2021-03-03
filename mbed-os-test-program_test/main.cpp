#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led1(DigitalOut &ledpin);
void Led3(DigitalOut &ledpin);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      Led1(myLED);
      Led3(myLED2);
   }
}