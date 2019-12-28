//**********SETUP FUNCTION *************************************************

void setup()
{
  //Set both motors for continuous rotation, only needs to be done once
  //ax12SetRegister2(10, AX_CCW_ANGLE_LIMIT_L,0);
  // ax12SetRegister2(11, AX_CCW_ANGLE_LIMIT_L,0);

 //open serial port to display data
 Serial.begin (9600); 
 
 //define I/O for ultrasonic sensor
 pinMode(trigPin,OUTPUT);   //sets digital pin 3 as output
 pinMode(echoPin, INPUT);   //sets digital pin 2 as input  

 //define pin for motor
 myservo.attach(3);  // attaches the servo on pin 3 to the servo object 
 
 //forward();//move car forward
 delay(3000);
}//end setup
