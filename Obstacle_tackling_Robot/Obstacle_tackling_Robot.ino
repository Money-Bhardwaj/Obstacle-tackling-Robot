int trigPin = 9;
int echoPin = 10;
 

 void Forward()
{
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
delay(1000);
}

void Turn()
{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}
void Stop()
{
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}

void setup() {
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;   /*Distance in centimeters*/
  delay(10);
 
  
  if((distance>20))
 {
  Forward() ;                            
 }
 
  else if(distance<20)  
 {
   Stop();
   Turn(); 
   delay(1500);                                        
 }
 
}
