import processing.serial.*;
import cc.arduino.*;
Arduino arduino;

int Pos = 90;
int Xline = 200;

void setup(){
size(400,200);
background(0);

println(Arduino.list());
arduino = new Arduino(this, "/dev/tty.usbmodem1411",57600);
arduino.pinMode(6,Arduino.SERVO);

stroke(255);
strokeWeight(5);
}

void draw(){
background(0);
arduino.servoWrite(6,Pos);

line(0,100,400,100);
ellipse(Xline, 100,20,20);
}

void mouseDragged(){
Pos = constrain(mouseX, 0, 180);
Xline = mouseX;
if(Xline <0) Xline = 0;
if(Xline>400) Xline = 400;
}