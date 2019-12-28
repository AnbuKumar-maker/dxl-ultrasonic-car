void scanLeft()
{
servoLeft();
  int leftVal = scan();
  Serial.print("leftVal: ");
  displayDistance(leftVal);
  if (leftVal < distanceVal)
    {
      Stop();
      delay(500);
      Serial.println("Left Value is less than 20");
     turnRight();
     delay(turnDelay);
     forward();} 
}
