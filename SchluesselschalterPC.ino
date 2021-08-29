const int schluesselPin = 2;  //Schluesselschalter
const int RelaisPin =  13;  //Relais schaltet Steckdosenleiste
const int RelaisPin1 =  12; //Relais parralel geschaltet zu PC on/off Taster

int merker=0;
int buttonState = 0;        

void setup() 
  {
    pinMode(RelaisPin, OUTPUT); 
    pinMode(RelaisPin1, OUTPUT); 
    pinMode(schluesselPin, INPUT);
    Serial.begin(9600);
  }

void loop()
{

  
    if (digitalRead(schluesselPin)==LOW){
    digitalWrite(RelaisPin1, LOW);
  } else {
    digitalWrite(RelaisPin1, HIGH);
  }

   buttonState = digitalRead(schluesselPin);

  if ((buttonState == HIGH)&&(merker==0)) 
    {   
      digitalWrite(RelaisPin, HIGH); 
      merker=1;
    } 
   
  if ((buttonState == LOW)&&(merker==1)) 
    {   
      merker=2;
    } 
    
  if ((buttonState == HIGH)&&(merker==2)) 
    {
       
       digitalWrite(RelaisPin, LOW); 
       merker=3; 
    }
   if ((buttonState == LOW)&&(merker==3)) 
    {   
       merker=0;
    } 
       
    Serial.print("Merker= ");
    Serial.println(merker);
  
    

  }
