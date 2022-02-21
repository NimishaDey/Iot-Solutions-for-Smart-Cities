int const LED1=9, trig1=3, echo1=2, LED2=10, trig2=13, echo2=5, LED3=11, trig3=7, echo3=6;
void setup() 
  // put your
{  pinMode(LED1,OUTPUT); 
pinMode(LED2,OUTPUT); 
pinMode(LED3,OUTPUT); 
pinMode(A0,INPUT);

pinMode(echo1,INPUT);
pinMode(echo2,INPUT);
pinMode(echo3,INPUT);
pinMode(trig1,OUTPUT);
pinMode(trig2,OUTPUT);
pinMode(trig3,OUTPUT);
//Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor;
sensor=analogRead(A0);
/*Serial.print("sensor:");
Serial.println(sensor);*/
digitalWrite(trig1,LOW);
delayMicroseconds(2);
digitalWrite(trig1,HIGH);
delayMicroseconds(10);
digitalWrite(trig1,LOW);
int duration1, distance1;
duration1=pulseIn(echo1,HIGH);
distance1=(duration1*(0.0343))/2;
//Serial.print("distance");
//Serial.println(distance);
//delay(500);

digitalWrite(trig3,LOW);
delayMicroseconds(2);
digitalWrite(trig3,HIGH);
delayMicroseconds(10);
digitalWrite(trig3,LOW);
int duration3, distance3;
duration3=pulseIn(echo3,HIGH);
distance3=(duration3*(0.0343))/2;
//Serial.print("distance");
//Serial.println(distance);
//delay(500);

digitalWrite(trig2,LOW);
delayMicroseconds(2);
digitalWrite(trig2,HIGH);
delayMicroseconds(10);
digitalWrite(trig2,LOW);
int duration2, distance2;
duration2=pulseIn(echo2,HIGH);
distance2=(duration2*(0.0343))/2;
//Serial.print("distance");
//Serial.println(distance);
//delay(500);

if(sensor<25)
{
 if(distance1<12)

{
  analogWrite(LED1,255);
  delay(50);
}

else
{
 analogWrite(LED1,15);
}

 if(distance2<12)

{
  analogWrite(LED2,255);
  delay(50);
}

else
{
 analogWrite(LED2,15);
}

 if(distance3<12)

{
  analogWrite(LED3,255);
  delay(50);
}

else
{
 analogWrite(LED3,15);
}
}
else
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);  
}
}
