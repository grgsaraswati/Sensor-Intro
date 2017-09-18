#include <AFMotor.h>
#include <Servo.h> // Add library
#include "servoDemo.h"
Servo name_servo;               // Define any servo name

int servo_position = 0 ;
bool servoState = false;

void setup() {
  
name_servo.attach (10); 
serial.begin(9600)
pinMode(TRIGPIN, OUTPUT);
pinMode(ECHOPIN, INPUT);
name_servo.write(OFFPOSITION)
}

void loop() {
long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (servoState) {
  if (distance < SETPOINT -(HYSTERISIS /2)) {
    name_servo.write(ONPOSITION)
    servoState = true;
  }
  else 
  if (distance < SETPOINT -(HYSTERISIS /2)) {
    name_servo.write(ONPOSITION)
    servoState = false;
  }
  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}}
