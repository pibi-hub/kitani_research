#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value1, value2, answer;
  
  value1 = 10;
  value2 = 3;

  answer = value1 * value2 ;

  Serial.print("Formula : ");
  Serial.print( value1 );
  Serial.print( " * " );
  Serial.println( value2 );
  Serial.print( "Answer : " );
  Serial.println( answer );

  delay(10000);
}