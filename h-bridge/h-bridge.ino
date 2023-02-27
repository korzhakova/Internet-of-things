#define forward 2
#define backward 3

void rotate(int fr, int bc) {
  analogWrite(forward, fr);
  analogWrite(backward, bc);
}

void rotate_to(char c, int dir) {
    switch (c) {
      case 'f':
        rotate(dir, 0);
        break;
      case 'b':
        rotate(0, dir);
        break;
    }
}

void setup() {
  pinMode(forward, OUTPUT);
  pinMode(backward, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    char d = Serial.read();
    rotate_to(d, 255);
  }
}