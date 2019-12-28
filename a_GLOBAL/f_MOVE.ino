//********* CAR FUNCTIONS *************************************
//function for vehicle to move forward
void forward()
{
   Serial.println("going forward");
  ax12SetRegister2(10, AX_GOAL_SPEED_L,1023); //full speed ccw
  ax12SetRegister2(11, AX_GOAL_SPEED_L,2047); //full speed cw
}

void Stop()
{
   Serial.println("stop");
  ax12SetRegister2(10, AX_GOAL_SPEED_L,0); // stop motor
  ax12SetRegister2(11, AX_GOAL_SPEED_L,0); // stop motor
}

//turn the car 90 degrees to the left
void turnLeft()
{
  Serial.println("turning left");
  ax12SetRegister2(10, AX_GOAL_SPEED_L,2047); 
  ax12SetRegister2(11, AX_GOAL_SPEED_L,2047); 
  delay(fullDelay);
  Stop();
}

//turn the car 90 degrees to the right
void turnRight()
{
   Serial.println("turning right");
  ax12SetRegister2(10, AX_GOAL_SPEED_L,1023); 
  ax12SetRegister2(11, AX_GOAL_SPEED_L,1023); 
  delay(fullDelay);
  Stop();
}





