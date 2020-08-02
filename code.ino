#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>
#include <Servo.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  125 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  575 // this is the 'maximum' pulse length count (out of 4096)
void setup()
{
 Serial.begin(9600);
 Serial.println("5 Servo test!");
 pwm.begin(); 
 pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
}
void loop()
{
 int val0 = analogRead(A0);
 int angle0=map(val0,350,0,0,115);
 int pulse0 = map(angle0,0, 180, SERVOMIN,SERVOMAX);
 pwm.setPWM(0, 0, pulse0);
 delay(50);
 //Serial.print( val0);
 //Serial.print(";"); 
 //Serial.println(  angle0);
 ////////////////////////////////////////////////////////////////////////////
 int val1 = analogRead(A1);
 int angle1=map(val1,200,600,160,25);
 int pulse1 = map(angle1,0, 180, SERVOMIN,SERVOMAX);
 pwm.setPWM(1, 0, pulse1 );
 delay(50);
// Serial.print(  val1);
 //Serial.print(";");
 //Serial.println(  angle1);
 ////////////////////////////////////////////////////////////////////////////
 int val2 = analogRead(A2);
 int angle2=map(val2,680,200,0,180);
 int pulse2 = map(angle2,0, 180, SERVOMIN,SERVOMAX);
 pwm.setPWM(2, 0, pulse2 );
 delay(50);
 //Serial.print(  val2);
 //Serial.print(";");
 //  Serial.println(  angle2);
 ////////////////////////////////////////////////////////////////////////////
 int val3 = analogRead(A3);
 int angle3=map(val3,0,678,0,180);
 int pulse3 = map(angle3,0, 180, SERVOMIN,SERVOMAX);
 pwm.setPWM(3, 0,pulse3 );
 delay(50);
 Serial.print(  val3);
 Serial.print(";");
 Serial.println(  angle3);   
 ////////////////////////////////////////////////////////////////////////////
}
