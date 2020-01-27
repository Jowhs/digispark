#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  DigiMouse.moveY(100); //down 10
  DigiMouse.delay(200);
  DigiMouse.moveX(100); //right 20
  DigiMouse.delay(200);
  DigiMouse.moveY(100); //down 10
  DigiMouse.delay(200);
  DigiMouse.moveX(100); //right 20
  DigiMouse.delay(200);
  DigiMouse.moveY(100); //down 10
  DigiMouse.delay(200);
  DigiMouse.moveX(100); //right 20
  DigiMouse.delay(200);
  DigiMouse.scroll(100);
  DigiMouse.delay(200);
}
