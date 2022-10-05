#include "Servo.h";

Servo ServoX;
Servo ServoY;

//Pinos dos Servo Motores
int pino_ServoX = 3;
int pino_ServoY = 5;

//Pinos analógicos do Joystick
int joystick_X = A0;
int joystick_Y = A1;
int joystick_Z = 2; 

int valor_joystickX; 
int valor_joystickY;
int valor_joystickZ;

//Valores das variaveis X Y Zint joystick_X = 0; 
int eixo_x = 0;
int eixo_y = 0;
int eixo_Z = 0;

void setup(){
//Pino Z como de entrada, devido ao botão
pinMode(joystick_Z, INPUT);

//Pino servoX e servoY
ServoX.attach(3);
ServoY.attach(5);
Serial.begin(9600);
}

void loop(){
Serial.println(valor_joystickX);
Serial.println(valor_joystickY);

valor_joystickX = analogRead(joystick_X);
valor_joystickX = map(valor_joystickX,0,1023,0,254);
ServoX.write(valor_joystickX);
delay(50);

valor_joystickY = analogRead(joystick_Y);
valor_joystickY = map(valor_joystickY,0,1023,0,254);
ServoY.write(valor_joystickY);
delay(50);

}