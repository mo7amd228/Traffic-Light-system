
// C++ code
//
int red = 3; 
int y = 4;
int green = 5; 

void setup()
{

  pinMode(red, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(green, OUTPUT);
  
  digitalWrite(red, 1); 
  delay(1000);
  digitalWrite(y,1);  
  delay(500);
  digitalWrite(y,0);
  delay(500);
  digitalWrite(y,1);
  delay(500);
  digitalWrite(y,0);
  delay(500);
  digitalWrite(y,1);
  delay(500);
  digitalWrite(y,0);
  digitalWrite(red, 0);
  digitalWrite(green,1);        
  delay(500);
  digitalWrite(green,0);
   
}

void loop()
{

}