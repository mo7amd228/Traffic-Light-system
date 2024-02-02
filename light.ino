// C++ code
//

int red = 4;
int yellow = 3;
int green = 2;

void setup()
{
  
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  
}

void loop()
{
  
  digitalWrite(4, 1);
  delay(1000);
  digitalWrite(4, 0);
  delay(1000);
  digitalWrite(3, 1);
  delay(1000);
  digitalWrite(3, 0);
  delay(1000);
  digitalWrite(2, 1);
  delay(1000);
  digitalWrite(2, 0);
  delay(1000);

}