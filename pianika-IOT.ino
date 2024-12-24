#define spiker 8

#define doo 1
#define ree 2
#define mii 3
#define faa 4
#define sool 5
#define laa 6
#define sii 7

float DO = 261.63;  
float RE = 293.66;  
float MI = 329.63;  
float FA = 349.23;  
float SOL = 392.00; 
float LA = 440.00;  
float SI = 493.88;

void setup() {
  pinMode(doo, INPUT_PULLUP);
  pinMode(ree, INPUT_PULLUP);
  pinMode(mii, INPUT_PULLUP);
  pinMode(faa, INPUT_PULLUP);
  pinMode(sool, INPUT_PULLUP);
  pinMode(laa, INPUT_PULLUP);
  pinMode(sii, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(doo) == LOW) {
    tone(spiker, DO, 500);
    delay(500);
  } else if (digitalRead(ree) == LOW) {
    tone(spiker, RE, 500);
    delay(500);
  } else if (digitalRead(mii) == LOW) {
    tone(spiker, MI, 500);
    delay(500);
  } else if (digitalRead(faa) == LOW) {
    tone(spiker, FA, 500);
    delay(500);
  } else if (digitalRead(sool) == LOW) {
    tone(spiker, SOL, 500);
    delay(500);
  } else if (digitalRead(laa) == LOW) {
    tone(spiker, LA, 500);
    delay(500);
  } else if (digitalRead(sii) == LOW) {
    tone(spiker, SI, 500);
    delay(500);
  }
}
