
void frontScan()
{
  servoStraight();
  int frontVal = scan();
  Serial.print("frontVal: ");
  displayDistance(frontVal);
  if (frontVal < distanceVal)
    { Stop();
      Serial.println("Front Value is less than 20");
      
      servoRight();
      int tempRightVal = scan();
      displayDistance(tempRightVal);
      delay(100);
      servoLeft();
      int tempLeftVal = scan();
      displayDistance(tempLeftVal);
      delay(100);
          
      if (tempLeftVal >= tempRightVal)
        { 
          Serial.println("hello left");
        turnLeft();}
        
      else
        {
        Serial.println( "hello right");
        turnRight();}
       
    
    delay(turnDelay);
    }
   
   forward(); 
}
