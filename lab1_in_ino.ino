int redPin = 3;                  
int bluePin = 6;  
int yellowPin = 9;               

void setup()                      
{
  pinMode(redPin, OUTPUT);       
  pinMode(bluePin, OUTPUT);      
  pinMode(yellowPin, OUTPUT); 
}

void loop()                      
{
  digitalWrite(redPin, HIGH);   
  digitalWrite(bluePin, HIGH);
  digitalWrite(yellowPin, HIGH);  
  delay(3000); 

  digitalWrite(redPin, LOW);     
  digitalWrite(yellowPin, LOW); 
  digitalWrite(bluePin, HIGH);
  delay(4000); 

  digitalWrite(redPin, HIGH);     
  digitalWrite(yellowPin, HIGH); 
  digitalWrite(bluePin, LOW);
  delay(5000); 

  digitalWrite(redPin, LOW);     
  digitalWrite(yellowPin, LOW); 
  digitalWrite(bluePin, LOW);
  delay(2000);                    
}
