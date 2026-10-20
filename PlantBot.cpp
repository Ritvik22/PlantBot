#pragma region VEXcode Generated Robot Configuration
// Make sure all required headers are included.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


#include "vex.h"

using namespace vex;

// Brain should be defined by default
brain Brain;


// START V5 MACROS
#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)
// END V5 MACROS


// Robot configuration code.
motor MotorBR = motor(PORT1, ratio18_1, true);

motor MotorFR = motor(PORT2, ratio18_1, true);

motor MotorFL = motor(PORT10, ratio18_1, false);

motor MotorBL = motor(PORT9, ratio18_1, false);

controller Controller1 = controller(primary);
/*vex-vision-config:begin*/
vision::signature VSensor__FLAG = vision::signature (1, 7569, 8113, 7842,-1, 293, 146,7.7, 0);
vision::signature VSensor__FLAG2 = vision::signature (2, 2625, 3255, 2940,-2527, -1997, -2262,3.1, 0);
vision VSensor = vision (PORT18, 64, VSensor__FLAG, VSensor__FLAG2);
/*vex-vision-config:end*/
motor MotorSS = motor(PORT12, ratio18_1, false);

motor MotorArm = motor(PORT21, ratio18_1, false);

motor swMotor = motor(PORT3, ratio18_1, false);




// Helper to make playing sounds from the V5 in VEXcode easier and
// keeps the code cleaner by making it clear what is happening.
void playVexcodeSound(const char *soundName) {
  printf("VEXPlaySound:%s\n", soundName);
  wait(5, msec);
}



// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

#pragma endregion VEXcode Generated Robot Configuration

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       {author}                                                  */
/*    Created:      {date}                                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// Include the V5 Library
#include "vex.h"
#include<cmath>

  
// Allows for easier use of the VEX Library
using namespace vex;
using namespace std;


competition Competition = competition();

void autonomous(void) {
  
}




// int scan(int type, int degree){

//   double tempSize;
//   tempSize = 9;
//   for(int i = 0; i < 360; i+=3){
    
//     MotorSS.spinToPosition(i, degrees);
    
//       if(type == 1){
//         VSensor.takeSnapshot(VSensor__FLAG);
//       } else if (type == 2) {
//         VSensor.takeSnapshot(VSensor__FLAG2);
//       }
//     wait(2, msec);

//     if((VSensor.largestObject.width * VSensor.largestObject.height)>tempSize){
//       tempSize = (VSensor.largestObject.width * VSensor.largestObject.height);
//       degree = i;
//       Brain.Screen.print("VEXcode");
//     }
//   }
//   Brain.Screen.print("Vision Sense Degree %d", degree);
//   return(degree);
// }

// void alignWDegree(int degree){
//   MotorSS.spinToPosition(degree, degrees);
//   Brain.Screen.print("Motor Spin To %d", degree);
// }

// void alignRobotWDegree(int type){
//   while(355 > MotorSS.position(degrees) && 1 <  MotorSS.position(degrees)){
//     MotorSS.spinFor(forward, -1, degrees);
//     alignWithObject(155, 165, type);
//     wait(2, msec);
//   }
// }


//First Iteration
// void TAGT(int flagType){
//   wait(2500, msec);

//   alignWDegree(scan(flagType, 0));
//   alignRobotWDegree(flagType);

//   MotorBR.stop();
//   MotorBL.stop();
      
//   MotorFR.stop();
//   MotorFL.stop();

//   spinArmTo(700);

//   if(flagType == 1){
//     VSensor.takeSnapshot(VSensor__FLAG);
//   } else if (flagType == 2) {
//     VSensor.takeSnapshot(VSensor__FLAG2);
//   }

//   //while(VSensor.largestObject.exists){
//   for(int h = 0; h<250; h++){
//     if(flagType == 1){
//       VSensor.takeSnapshot(VSensor__FLAG);
//     } else if (flagType == 2) {
//       VSensor.takeSnapshot(VSensor__FLAG2);
//     }

//      // if(VSensor.largestObject.exists){

//         for(int i = 0; i < 2; i++){
//             alignWithObject(150, 170, flagType);
//          }
//         gotoObject(60, 60, 5, flagType);
//       wait(25, msec);
//       Controller1.Screen.clearScreen();


//   }
  
// }

// //Second Itreation
// void TAGTTWO(int flagType, int sub, int wat) {
  
//   wait(2500, msec);

//   alignWDegree(scan(flagType, 0));
//   alignRobotWDegree(flagType);
//   MotorBR.stop();
//   MotorBL.stop();    
//   MotorFR.stop();
//   MotorFL.stop();
  
//   for(int i = 0; i < 300; i++){
//     alignWithObject(163, 157, flagType);
//   }
  
//   MotorBR.stop();
//   MotorBL.stop();    
//   MotorFR.stop();
//   MotorFL.stop();
//   spinArmTo(700);

//   float distcm = 0;
//   distcm = estimateDist(flagType);
//   MotorBR.spin(reverse, -5, volt);
//   MotorFR.spin(reverse, -5, volt);  
//   MotorBL.spin(reverse, -5, volt);
//   MotorFL.spin(reverse, -5, volt);
//   wait((distcm/0.014)-sub, msec);
  
//   MotorBR.spin(reverse, 0, volt);
//   MotorFR.spin(reverse, 0, volt);    
//   MotorBL.spin(reverse, 5, volt);
//   MotorFL.spin(reverse, 5, volt);
//   wait(200, msec);
//   MotorBR.stop();
//   MotorBL.stop();      
//   MotorFR.stop();
//   MotorFL.stop();

//   wait(1000, msec);
  
//   if(VSensor.largestObject.exists){
//     spinArmTo(180);
//     wait(2000, msec);
//     swMotor.spinToPosition(-90, degrees);
//     wait(wat, msec);
//     swMotor.spinToPosition(0, degrees);
//     spinArmTo(700);
//   }
//   MotorBR.spin(reverse, 5, volt);
//   MotorFR.spin(reverse, 5, volt);    
//   MotorBL.spin(reverse, 5, volt);
//   MotorFL.spin(reverse, 5, volt);
//   wait(1500, msec);

//   MotorBR.stop();
//   MotorBL.stop();
//   MotorFR.stop();
//   MotorFL.stop();
//   spinArmTo(0);
// }



void spinArmTo(int deg){
  MotorArm.spinToPosition(deg, degrees);
}

void alignWithObject(double floor, double ceiling, int type) {

  if(type == 1){
    VSensor.takeSnapshot(VSensor__FLAG);
  } else if (type == 2) {
    VSensor.takeSnapshot(VSensor__FLAG2);
  }
  MotorBR.stop();
  MotorBL.stop();
    
  MotorFR.stop();
  MotorFL.stop();

  double elec = 2;
  

  if(VSensor.largestObject.centerX > ceiling){

      MotorBR.spin(reverse, -elec, volt);
      MotorFR.spin(reverse, -elec, volt);
      
      MotorBL.spin(reverse, elec, volt);
      MotorFL.spin(reverse, elec, volt);

  }

  if(VSensor.largestObject.centerX < floor){

      MotorBR.spin(reverse, elec, volt);
      MotorFR.spin(reverse, elec, volt);
      
      MotorBL.spin(reverse, -elec, volt);
      MotorFL.spin(reverse, -elec, volt);

  }

  if(VSensor.largestObject.centerX >floor && VSensor.largestObject.centerX <ceiling){

    MotorBR.stop();
    MotorBL.stop();
    
    MotorFR.stop();
    MotorFL.stop();

  }

}

float estimateDist(int flagType){

  double heightAvg = 0;
  double counter = 0;
  
  for (int j = 0; j < 1000; j++){
    
    if(flagType == 1){
      VSensor.takeSnapshot(VSensor__FLAG);
    } else if (flagType == 2) {
      VSensor.takeSnapshot(VSensor__FLAG2);
    }   
    if(VSensor.largestObject.height==0){
      j--;
    }
    else{
      heightAvg = heightAvg + VSensor.largestObject.height;
      counter++;
      wait(3, msec);
    }
  }
  float dist = 193.9237397*(pow(0.9418815256, (heightAvg/counter)));
  Brain.Screen.print(dist);
  Brain.Screen.print(heightAvg/counter);
  return(dist);

}

void assesSurroundings(int flagType) {

  while(!VSensor.largestObject.exists){
    if(flagType == 1){
      VSensor.takeSnapshot(VSensor__FLAG);
    } else if (flagType == 2) {
      VSensor.takeSnapshot(VSensor__FLAG2);
    }

    MotorBR.spin(reverse, -5, volt);
    MotorFR.spin(reverse, -5, volt);
      
    MotorBL.spin(reverse, 5, volt);
    MotorFL.spin(reverse, 5, volt);
    wait(10, msec);

  }

}

double getRatio (int flagType){
  
  double tempheight = 0;
  double tempwidth = 0;
  
  for(int i = 0; i < 100; i++){
    if(flagType == 1){
      VSensor.takeSnapshot(VSensor__FLAG);
    } else if (flagType == 2) {
      VSensor.takeSnapshot(VSensor__FLAG2);
    }
    tempheight = tempheight + VSensor.largestObject.height;
  }
  tempheight = tempheight/100;

  for(int i = 0; i < 100; i++){
    if(flagType == 1){
      VSensor.takeSnapshot(VSensor__FLAG);
    } else if (flagType == 2) {
      VSensor.takeSnapshot(VSensor__FLAG2);
    }
    tempwidth = tempwidth + VSensor.largestObject.width;
  }
  tempwidth = tempwidth/100;

  return(tempheight/tempwidth);

}

void strafeToAlign (int flagType, double floor, double ceil) {

  double elec = 5;  
  double initialRatio = getRatio(flagType);

  if(flagType == 1){
    VSensor.takeSnapshot(VSensor__FLAG);
  } else if (flagType == 2) {
    VSensor.takeSnapshot(VSensor__FLAG2);
  }

  if(!((initialRatio > floor) && (initialRatio < ceil))){
    for(int i = 0; i < 1000; i++){
      MotorBR.spin(reverse, elec, volt);
      MotorFR.spin(reverse, (-elec)/1.6, volt);
        
      MotorBL.spin(reverse, -elec, volt);
      MotorFL.spin(reverse, (elec)/1.6, volt);
      wait(2, msec);
    }
    double tryRight = getRatio(flagType); 

    for(int i = 0; i < 1000; i++){
      MotorBR.spin(reverse, -elec, volt);
      MotorFR.spin(reverse, (elec)/1.6, volt);
        
      MotorBL.spin(reverse, elec, volt);
      MotorFL.spin(reverse, (-elec)/1.6, volt);
      wait(2, msec);
    }
     
    
    bool goRight = (tryRight < initialRatio)?true:false;

    
    double currRatio = getRatio(flagType);
    while (!((currRatio > floor) && (currRatio < ceil))) {

      currRatio = getRatio(flagType);
      if (goRight){
        MotorBR.spin(reverse, elec*1.6, volt);
        MotorFR.spin(reverse, (-elec), volt);
        
        MotorBL.spin(reverse, -elec*1.6, volt);
        MotorFL.spin(reverse, (elec), volt);
        
      } else {
        MotorBR.spin(reverse, -elec*1.6, volt);
        MotorFR.spin(reverse, (elec), volt);
        
        MotorBL.spin(reverse, elec*1.6, volt);
        MotorFL.spin(reverse, (-elec), volt);
      }
      wait(10, msec);
      for(int i =0; i < 10; i++){
        alignWithObject(158, 162, flagType);
        wait(1, msec);
      }

    }

  }

}

void driveOperation (int flagType, int sub) {
  float distcm = 0;
  float driveTime = 0;
  distcm = estimateDist(flagType);
  driveTime = ((distcm/0.014)-sub);
  MotorBR.spin(reverse, -5, volt);
  MotorFR.spin(reverse, -5, volt);  
  MotorBL.spin(reverse, -5, volt);
  MotorFL.spin(reverse, -5, volt);
  wait((driveTime/2), msec);
  for(int i = 0; i < 2000; i++){
    alignWithObject(158, 162, flagType);
    wait(1, msec);
  }
  MotorBR.spin(reverse, -5, volt);
  MotorFR.spin(reverse, -5, volt);  
  MotorBL.spin(reverse, -5, volt);
  MotorFL.spin(reverse, -5, volt);
  wait((driveTime/2), msec);
  
  for(int i = 0; i < 2000; i++){
    alignWithObject(158, 162, flagType);
    wait(1, msec);
  }
}

//Third Itreation
void TAGTTHREE(int flagType, int sub, int wat) {
  
  wait(2500, msec);

  assesSurroundings(flagType);
  MotorBR.stop();
  MotorBL.stop();    
  MotorFR.stop();
  MotorFL.stop();
  
  for(int i = 0; i < 2000; i++){
    alignWithObject(158, 162, flagType);
    wait(1, msec);
  }
  MotorBR.stop();
  MotorBL.stop();    
  MotorFR.stop();
  MotorFL.stop();

  strafeToAlign(flagType, 0.99, 1.01);
  Brain.Screen.print("///");
  Brain.Screen.print(getRatio(flagType));
  Brain.Screen.print("///");

  MotorBR.stop();
  MotorBL.stop();    
  MotorFR.stop();
  MotorFL.stop();

  for(int i = 0; i < 2000; i++){
    alignWithObject(158, 162, flagType);
    wait(1, msec);
  }

  spinArmTo(700);

  driveOperation(flagType, sub);

  MotorBR.stop();
  MotorBL.stop();    
  MotorFR.stop();
  MotorFL.stop();

  MotorBR.spin(reverse, -5, volt);
  MotorFR.spin(reverse, -5, volt);  
  MotorBL.spin(reverse, -5, volt);
  MotorFL.spin(reverse, -5, volt);

  wait(300, msec);

  MotorBR.spin(reverse, 0, volt);
  MotorFR.spin(reverse, 0, volt);    
  MotorBL.spin(reverse, 5, volt);
  MotorFL.spin(reverse, 5, volt);
  wait(200, msec);
  MotorBR.stop();
  MotorBL.stop();      
  MotorFR.stop();
  MotorFL.stop();

  wait(1000, msec);
  
  if(VSensor.largestObject.exists){
    spinArmTo(180);
    wait(2000, msec);
    swMotor.spinToPosition(-90, degrees);
    wait(wat, msec);
    swMotor.spinToPosition(0, degrees);
    spinArmTo(700);
  }
  MotorBR.spin(reverse, 5, volt);
  MotorFR.spin(reverse, 5, volt);    
  MotorBL.spin(reverse, 5, volt);
  MotorFL.spin(reverse, 5, volt);
  wait(1500, msec);

  MotorBR.stop();
  MotorBL.stop();
  MotorFR.stop();
  MotorFL.stop();
  spinArmTo(0);
}



int main() {
  wait(500, msec);
  //function that waters plants
  TAGTTHREE(1, 1100, 5000);
  Competition.autonomous(autonomous);
  
}
