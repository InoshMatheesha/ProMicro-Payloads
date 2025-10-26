// fast_notepad_hello.ino
// Opens Run -> Notepad -> types "Hello World" quickly and safely.

#include <Keyboard.h>

void setup() {
  delay(500);  // just enough for USB setup
  Keyboard.begin();

  // Win + R (Run)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(80);
  Keyboard.releaseAll();
  delay(150);

  // Type notepad + Enter
  Keyboard.print("notepad");
  delay(60);
  Keyboard.write(KEY_RETURN);

  // Tiny pause for Notepad to open
  delay(700);

  // Type message
  Keyboard.print("123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789");
  Keyboard.write(KEY_RETURN);

  Keyboard.end();
}

void loop() { }
