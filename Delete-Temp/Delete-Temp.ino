#include "DigiKeyboard.h"
#define KEY_DELETE  76

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("%temp%");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_E, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_DELETE);
  }

void loop() {
  
}
  
