#include "DigiKeyboard.h"
#define KEY_ARROW_RIGHT 0x4F

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Hello World! I'm using Digispark.");
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT | 0);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
}

void loop() {
  
}
