int LedPin = 3;            
int ButPin = 4;             
int flag = 0;               

void setup()
{
  pinMode(LedPin, OUTPUT);  
}  

void loop()
{
  if(digitalRead(ButPin) == HIGH && flag == 0)      
    {                                              
      digitalWrite(LedPin, !digitalRead(LedPin));
      flag = 1;
    }
  
  if(digitalRead(ButPin) == LOW && flag == 1)
    {
      flag = 0;
    }  
}