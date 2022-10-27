#define btn_pin 3
#define led_pin 10

bool led_state = false;
int currentValue, previousValue;
int pwr = 255;
bool move = false;

void setup(){
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin, INPUT);
  Serial.begin(9600);
}

void loop(){
  currentValue = digitalRead(btn_pin);
  if (currentValue != previousValue){
    currentValue = digitalRead(btn_pin);
    long pressed = millis();
    while (digitalRead(btn_pin)){
      if (millis() - pressed >= 500 && led_state){
        while (digitalRead(btn_pin)){
          if (move){
            pwr = min(pwr + 1, 255);
          }
          else{
            pwr = max(pwr - 1, 15);
          }
          analogWrite(led_pin, pwr);
          delay(10);
        }
        move = !move;
      }
      delay(10);
    }
    if (millis() - pressed < 500){
      if (currentValue){
          led_state = !led_state;
      }
      if (led_state){
        analogWrite(led_pin, pwr);
      }
      else{
        analogWrite(led_pin, 0);
      }
    }
  }
  previousValue = currentValue;
}
