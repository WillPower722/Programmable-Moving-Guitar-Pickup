#include "mbed.h"
#include "direction_control.h"

#define motorLim 220;      //motor limit
#define noiseReduction 2   //potentiometer noise elimination

AnalogIn potIn(A0);        //potentiometer
float pot = 0.0;           //set all values to 0
int motor1Pos = 0;
int motor2Pos = 0;
int posControl = 0;

int main(){
    
    while(1){
        
        //read the value of potentiometer
        pot = potIn;
        //limit of 4 full turns of the motor
        posControl = pot*motorLim;
        
        //check if the pot value is greater than the motor position
        //the '-2' and '+2' eliminates noise from the potentiometer
        if (posControl-noiseReduction > motor2Pos){
            //clockwise
            //Motor_1_Forward();
            Motor_2_Forward(); 
            //increment motor position
            //motor1Pos++; 
            motor2Pos++; 
        }
        
        else if (posControl+noiseReduction < motor2Pos){
            //anti-clockwise
            //Motor_1_Reverse();  
            Motor_2_Reverse();
            //decrement motor position
            //motor1Pos--;
            motor2Pos--;
        }
    }
}
