//Robot Car using two Dynamixel Ax-12 Servos, one 9g servo motor,
//Hc-sr04 ultrasonic sensor,and a universal wheel

//Include Libraries
#include <ax12.h>   // dynamixel ax-12 library
#include <BioloidController.h> //arbotix-m library
#include <Servo.h>  // servo library
 //Defining pins             
#define trigPin 0    //any instance of trigPin will be replaced with value 0
#define echoPin 1  // any instance of echoPin will be replaced with value 1
//Creating servo object
Servo myservo;  // create servo object to control a servo 
//Create global variables
int pos = 0;    // variable to store the servo position
int fullDelay = 1000; //delay for full turn
int turnDelay = 500;
int scanDelay = 50;
int distanceVal = 20;   //20 cm

//Function prototypes
int scan();       //scans and returns distance in centimeters
void forward();   //moves car forward
void Stop();      //stops the car
void turnRight(); //turns right 90 degrees
void turnLeft();  //turns left 90 degrees
void servoStraight(); //servo in straight position
void servoLeft(); //servo left position
void servoRight(); //servo right position 
