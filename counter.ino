// C++ code
//

int counter = 0;
int before = 0;
int after = 0;

void setup()
{
  
  pinMode(5,INPUT);
  Serial.begin(9600);
    
}

void loop()
{

  before = digitalRead(5);
  if (before != after)
  {

    if (before == 1)
    {
 
      counter++;
      Serial.println(counter);
      
    }
    
  before = after;
    
  }
}
