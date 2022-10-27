#define btn_pin 12
#define A 4
#define B 5
#define C 6
#define D 7
#define E 8
#define FF 9
#define G 10
#define H 11

void switchoff()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(FF, LOW);
  digitalWrite(G, LOW);
}

int val_max = 0;
int val_min = 1024;

void setup() {
  Serial.begin(9600);
  pinMode(btn_pin, INPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(FF, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
}

bool val_last = 1;
bool val = 1;

int count = 0;
int time = 0;

void loop() {
  val_last = val;
  val = digitalRead(btn_pin);
  delay(100);
  if (val == 0 && val_last == 1)
  {
    count++;
  }
  if (val == 1 && val_last == 1)
  {
    time++;
    Serial.println(time / 3);
    delay(1000);
  }

  if (val == 0 && val_last == 0)
  {
    if (time / 3 == 0)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(FF, HIGH);
    }
    else if (time / 3 == 1)
    {
      switchoff();
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
    }
    else if (time / 3 == 2)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(D, HIGH);
    }
    else if (time / 3 == 3)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
    }
    else if (time / 3 == 4)
    {
      switchoff();
      digitalWrite(FF, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
    }
    else if (time / 3 == 5)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(FF, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
    }
    else if (time / 3 == 6)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(FF, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(G, HIGH);
    }
    else if (time / 3 == 7)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
    }
    else if (time / 3 == 8)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(FF, HIGH);
      digitalWrite(G, HIGH);
    }
    else if (time / 3 == 9)
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(FF, HIGH);
    }
    else
    {
      switchoff();
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(FF, HIGH);
    }
  }
}
