#include<servo.h>
//Declare the Servo pin int servoPin = 4;
int sensor = 2;
//Create a servo object Servo Servol;
void setup()
{

//We need to attach the servo to the used pin number
Servol.attach(servoPin); pinMode(sensor, INPUT0;
}
Void loop()
{
int x= digitalRead(sensor);
 
if( x ==0)
{

Servol.write(0); delay(1000); Servol.write(145); delay(1000);
}

else{ Servol.write(0);
}
}
