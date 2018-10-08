#include <Led.h>

Led led1(12);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  led1.on();
  delay(1000);
  led1.off();
  delay(1000);
}
