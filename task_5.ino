int motor = 3;
int trig = 12 ;
int echo = 6;
 long  t ;
 long  d ;
int speed;
void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
Serial.begin(9600);
}
void loop()
{
  digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
    t = pulseIn (echo,HIGH);
    d = 0.0343*(t/2);
  if ( d>20 && d<200){ 
    speed = map(d,20,200,255,0);
    analogWrite(motor,speed);
   }
  else{    analogWrite(motor,0);}

}