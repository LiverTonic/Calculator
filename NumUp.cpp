#include <Arduino.h>
int i = 0; // Initialize i to 0

int a = 7; //top mid
int b = 6; //top right
int c = 5; //bottom right
int d = 11; //bottom mid
int e = 10; // bottom left
int f = 8; // top left
int g = 9; // mid
int dp = 4; // dot point

int up = 13;    // Red button | increment by 1
int reset = 12; // White button | reset counter to 0

void nuh_uh(void)//not used in script but will turn off all pins
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void display0(void)//0
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);

}

void display1(void)//1
{
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
}

void display2(void)//2
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
}

void display3(void)//3
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(g,HIGH);
}

void display4(void)//4
{
  digitalWrite(f,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
}

void display5(void)//5
{
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
}

void display6(void)//6
{
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);

}

void display7(void)//7
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
}

void display8(void)//8
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}

void display9(void)//9
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}


void setup() {
  // set the button pins as inputs
  pinMode(up, INPUT);
  pinMode(reset, INPUT);  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}
void clearDisplay() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void loop() {
  static bool lastButtonState = LOW; // Track the previous state of the button

  bool currentButtonState = digitalRead(up); // Read the current state of the button
;
  if (currentButtonState == HIGH && lastButtonState == LOW){
    // Button was just pressed
    i++; // Increment i by one
  
    delay(50); // Debounce delay

   
  }

  lastButtonState = currentButtonState; // Update the last button state

  

  // Display the corresponding number
  if (i == 0) {
    clearDisplay();
    display0();
  } else if (i == 1) {
    clearDisplay();
    display1();
  } else if (i == 2) {
    clearDisplay();
    display2();
  } else if (i == 3) {
    clearDisplay();
    display3();
  } else if (i == 4) {
    clearDisplay();
    display4();
  } else if (i == 5) {
    clearDisplay();
    display5();
  } else if (i == 6) {
    clearDisplay();
    display6();
  } else if (i == 7) {
    clearDisplay();
    display7();
  } else if (i == 8) {
    clearDisplay();
    display8();
  } else if (i == 9) {
    clearDisplay();
    display9();
  }

 
  
}


int myFunction(int x, int y) {
  return x + y;
}