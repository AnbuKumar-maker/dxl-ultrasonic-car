void scanRight()
{
servoRight();
  int rightVal = scan();
  Serial.print("rightVal: ");
  displayDistance(rightVal);
  if (rightVal < distanceVal)
    {
      Stop();
      delay(500);
      Serial.println("Right Value is less than 20");
     turnLeft();
     delay(turnDelay);
     forward();}
}
