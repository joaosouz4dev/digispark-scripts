//This DigiSpark script writes the wireless network credentials to a csv file and emails it.
//Credits to p0wc0w.
//Updated by gadotti:
//  Uses a pt-bt layout keyboard
//  Change to search for portuguese brazilian windows terms
//  replace smtp is smtp.gmail.com
//  replace smtp port is 587
//  replace your-email@gmail.com
//  replace your-password
//  replace destination-email@gmail.com

#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start
  
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("http://fakeupdate.net/win10/index.html");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_F11);
  
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
