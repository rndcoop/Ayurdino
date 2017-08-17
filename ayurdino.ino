int btnPin = 5;

void setup() {
  pinMode(btnPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  while (digitalRead(btnPin) == HIGH) {
    // do nothing until pin 2 goes low
    delay(100);
  }
  
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F1);
  Keyboard.releaseAll();
  delay(500);
}
