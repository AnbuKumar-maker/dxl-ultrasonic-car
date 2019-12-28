//*********** FUNCTIONS FOR 9G SERVO **********************

void servoStraight()
{
  myservo.write(90);
  delay(500);
}

//function to turn the servo full right
void servoRight()
{
  myservo.write(160);
  delay(500);
}

//function to turn the servo full left
void servoLeft()
{
  myservo.write(20);
  delay(500);
}
