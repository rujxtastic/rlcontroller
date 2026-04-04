//NOTE: in-game, change LB to roll left and RB to roll right.
//Remove other uses of LB and RB, and it is a good idea to remove all controls that might interfere.

#include <Wire.h>
#include <MPU6050.h>
#include <BleGamepad.h>
//SW3
#define Hood 7 
//SW2
#define WheelFR 11 
//SW4
#define WheelFL 6 
//SW1
#define WheelBR 12 
//SW5
#define WheelBL 2 

MPU6050 mpu;
BleGamepad bleGamepad;
float dT = getCpuFrequencyMhz()*1000000; //hertz
float gx=0,gy=0,gz=0; //angle relative to start (Arbitrary units)

void setup() {
  Serial.begin(115200);

  Wire.begin(23, 24); // SDA, SCL for ESP32-C3
  mpu.initialize();
  bleGamepad.begin();

  pinMode(Hood, INPUT_PULLUP);
  pinMode(WheelFR, INPUT_PULLUP);
  pinMode(WheelFL, INPUT_PULLUP);
  pinMode(WheelBR, INPUT_PULLUP);
  pinMode(WheelBL, INPUT_PULLUP);
}

void loop() {

  int16_t ax, ay, az;
  int16_t vgx, vgy, vgz; //this is change in angle (AU)

  mpu.getMotion6(&ax, &ay, &az, &vgx, &vgy, &vgz);

  gx += vgx/dT;
  gy += vgy/dT;
  gz += vgz/dT;

  bool h, fr, fl, br, bl;
  h = digitalRead(Hood)==LOW;
  fr = digitalRead(WheelFR)==LOW;
  fl = digitalRead(WheelFL)==LOW;
  br = digitalRead(WheelBR)==LOW;
  bl = digitalRead(WheelBL)==LOW;

  int16_t stickX = 0, stickY = 0;

  //Boost
  if (h){
    bleGamepad.press(1);
  }
  else{
    bleGamepad.release(1);
  }

  //Powerslide
  if ((fl&&bl)||fr&&br){
    bleGamepad.press(2);//X
  }
  else{
    bleGamepad.release(2);
  
  //turn left and right
  if (fr || br) stickX = 32767;
  if (fl || bl) stickX = -32767;

  //forwards and backwards
  if (fr || fl) bleGamepad.press(7); else bleGamepad.release(7);
  if (br || bl) bleGamepad.press(6); else bleGamepad.release(6);
  }

  //direction
  if (gz>1000){//AU - Beta testing
    stickX = 1000; // "
  }
  else if (gz<-1000){
    stickX = -1000;
  }
  if (gx>1000){
    stickY = 1000; 
  }
  else if (gx<-1000){
    stickY = -1000; 
  }
  if (gy<-1000){
    bleGamepad.press(4);//LB works when configured
  }
  else{
    bleGamepad.release(4);
  }
  if (gy>1000){
    bleGamepad.press(5);//RB "
  }
  else{
    bleGamepad.release(5);
  }

  //jump
  if (az > 10000){//AU
    bleGamepad.press(0);
    bleGamepad.release(0);
  }

  bleGamepad.setAxes(stickX, stickY);
}
