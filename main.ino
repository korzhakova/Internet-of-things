#define led_pin 3
#define sensor_pin A2

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}
void loop() {
  int val = analogRead(sensor_pin);
  Serial.println(val);
  if (val < 800){
      digitalWrite(led_pin, LOW);    
    }
   else {
      digitalWrite(led_pin, HIGH);   
    }                      
}
