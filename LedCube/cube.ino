void setup()
{
  for (int i=0; i<6; i++) {
  	pinMode(i, OUTPUT);
  }
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  digitalWrite(A1,HIGH); 
  digitalWrite(A2,HIGH);
}

void loop()
{
  digitalWrite(A1,LOW); 
  for (int i=2; i<6; i++) {
    digitalWrite(i,HIGH);
    delay(200);
    delay(200);
    delay(200);
    digitalWrite(i,LOW);
  }
  
  digitalWrite(A1,HIGH);
  
  digitalWrite(A2,LOW); 
  for (int i=2; i<6; i++) {
    digitalWrite(i,HIGH);
    delay(200);
    delay(200);
    delay(200);
    digitalWrite(i,LOW);
  }
  
   digitalWrite(A2,HIGH);
}