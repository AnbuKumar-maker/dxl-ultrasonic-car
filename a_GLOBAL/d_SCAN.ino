//*********** FUNCTION FOR ULTRASONIC SENSOR ********
int scan()
{
  int duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/ 29.1 ;    //convert to centimeters
  delay(scanDelay);
  return distance;
}
