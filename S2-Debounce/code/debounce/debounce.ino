#define BTN 5

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BTN, INPUT);
}

void loop() {
  // Using busy waiting
  if (digitalRead(BTN)) {
    if (digitalRead(LED_BUILTIN)) {
      digitalWrite(LED_BUILTIN, LOW); 
    } else {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    while(digitalRead(BTN));
  }
}
