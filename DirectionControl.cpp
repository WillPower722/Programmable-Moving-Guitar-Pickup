#include "mbed.h"

DigitalOut Ai(D2);
DigitalOut Bi(D3);
DigitalOut Aix(D4);
DigitalOut Bix(D5);
DigitalOut Aj(D9);
DigitalOut Bj(D10);
DigitalOut Ajx(D11);
DigitalOut Bjx(D12);

float timeStep = 0.002;

void Motor_1_Forward(){
        //step1
        Ai = 1;
        Bi = 1;
        Aix = 0;
        Bix = 0;
        wait(timeStep);
        //step2
        Ai = 0;
        Bi = 1;
        Aix = 1;
        Bix = 0;
        wait(timeStep);
        //step3
        Ai = 0;
        Bi = 0;
        Aix = 1;
        Bix = 1;
        wait(timeStep);
        //step4
        Ai = 1;
        Bi = 0;
        Aix = 0;
        Bix = 1;
        wait(timeStep);
}

void Motor_1_Reverse(){
        
        //step1
        Ai = 1;
        Bi = 0;
        Aix = 0;
        Bix = 1;
        wait(timeStep);
        //step2
        Ai = 0;
        Bi = 0;
        Aix = 1;
        Bix = 1;
        wait(timeStep);
        //step3
        Ai = 0;
        Bi = 1;
        Aix = 1;
        Bix = 0;
        wait(timeStep);
        //step4
        Ai = 1;
        Bi = 1;
        Aix = 0;
        Bix = 0;
        wait(timeStep);
}

void Motor_2_Forward(){

        //step1
        Aj = 1;
        Bj = 1;
        Ajx = 0;
        Bjx = 0;
        wait(timeStep);
        //step2
        Aj = 0;
        Bj = 1;
        Ajx = 1;
        Bjx = 0;
        wait(timeStep);
        //step3
        Aj = 0;
        Bj = 0;
        Ajx = 1;
        Bjx = 1;
        wait(timeStep);
        //step4
        Aj = 1;
        Bj = 0;
        Ajx = 0;
        Bjx = 1;
        wait(timeStep);
}

void Motor_2_Reverse(){
        
        //step1
        Aj = 1;
        Bj = 0;
        Ajx = 0;
        Bjx = 1;
        wait(timeStep);
        //step2
        Aj = 0;
        Bj = 0;
        Ajx = 1;
        Bjx = 1;
        wait(timeStep);
        //step3
        Aj = 0;
        Bj = 1;
        Ajx = 1;
        Bjx = 0;
        wait(timeStep);
        //step4
        Aj = 1;
        Bj = 1;
        Ajx = 0;
        Bjx = 0;
        wait(timeStep);
}
