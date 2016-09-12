#include <Servo.h>
int sensorPin[] = {A0,A1,A2,A3};
int val[] = {0,0,0,0};
Servo servo1;

void setup()
{
  servo1.attach(A4);
  Serial.begin(9600);
}

void loop()
{
   for(int i=0;i<4;i++){
    Serial.println(val[i]);
    
 }
 for(int i=0;i<4;i++){
    val[i] = analogRead(sensorPin[i]);
    val[i] = map(val[i], 0, 100, 0,20);
 }
  if(val[0]<3||val[1]<3||val[2]<3||val[3]<3){
    servo1.write(10);
  }else{
    servo1.write(68);
  }
}
