#include <DigiMouse.h>

boolean isPressed = true;

void setup() {
  DigiMouse.begin(); 
}

void loop() {
  digitalWrite(1, HIGH); // LED on <--> Action start

  if (isPressed == true) {
    isPressed = false;
    DigiMouse.setButtons(1<<0); //left click
    DigiMouse.delay(5);
    DigiMouse.moveX(0);
    DigiMouse.moveY(0);
    for (int i=0; i<65; i++) {
      DigiMouse.moveX(0);
      DigiMouse.moveY(5);
      DigiMouse.delay(20);
    }

    for (int i=0; i<24; i++) {
      DigiMouse.moveX(2);
      DigiMouse.moveY(5);
      DigiMouse.delay(25);
    }

    for (int i=0; i<15; i++) {
      DigiMouse.moveX(-10);
      DigiMouse.moveY(1);
      DigiMouse.delay(30);
    }

    for (int i=0; i<11; i++) {
      DigiMouse.moveX(13);
      DigiMouse.moveY(1);
      DigiMouse.delay(30);
    }

    for (int i=0; i<3; i++) {
      DigiMouse.moveX(0);
      DigiMouse.moveY(6);
      DigiMouse.delay(30);
    }

    for (int i=0; i<11; i++) {
      DigiMouse.moveX(-14);
      DigiMouse.moveY(-2);
      DigiMouse.delay(30);
    }
    DigiMouse.setButtons(0); //unclick all
    DigiMouse.moveX(0);
    DigiMouse.moveY(0);
  }

  digitalWrite(1, LOW); // LED off <--> Action end
}
