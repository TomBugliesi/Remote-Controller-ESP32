#include <Arduino.h>

#include "SPI.h"
#include "TFT_eSPI.h"

TFT_eSPI tft = TFT_eSPI();

const int GPIO14 = 14; // digital input 
const int GPIO15 = 15; // digital input
const int GPIO16 = 16; // digital input
const int GPIO17 = 17; // digital input
const int GPIO19 = 19; // digital input
const int GPIO21 = 21; // digital input
const int GPIO22 = 22; // digital input
const int GPIO25 = 25; // digital input
const int GPIO26 = 26; // digital input
const int GPIO27 = 27; // digital input
const int GPIO32 = 32; // analog input
const int GPIO33 = 33; // analog input
const int GPIO34 = 34; // analog input
const int GPIO35 = 35; // analog input
const int GPIO36 = 36; // analog input
const int GPIO39 = 39; // analog input

int GPIO14_state;
int GPIO15_state;
int GPIO16_state;
int GPIO17_state;
int GPIO19_state;
int GPIO21_state;
int GPIO22_state;
int GPIO25_state;
int GPIO26_state;
int GPIO27_state;
int GPIO32_state;
int GPIO33_state;
int GPIO34_state;
int GPIO35_state;
int GPIO36_state;
int GPIO39_state;

String GPIO14_str = "GPIO14";
String GPIO15_str = "GPIO15";
String GPIO16_str = "GPIO16";
String GPIO17_str = "GPIO17";
String GPIO19_str = "GPIO19";
String GPIO21_str = "GPIO21";
String GPIO22_str = "GPIO22";
String GPIO25_str = "GPIO25";
String GPIO26_str = "GPIO26";
String GPIO27_str = "GPIO27";
String GPIO32_str = "GPIO32";
String GPIO33_str = "GPIO33";
String GPIO34_str = "GPIO34";
String GPIO35_str = "GPIO35";
String GPIO36_str = "GPIO36";
String GPIO39_str = "GPIO39";

void print_state(String name, int state);

void setup() {
  Serial.begin(115200);  
  tft.init();
  tft.fillScreen(TFT_RED);
  delay(500);
  // initialize the pushbutton pin as an INPUT_PULLDOWN
  pinMode(GPIO14, INPUT_PULLDOWN);
  pinMode(GPIO15, INPUT_PULLDOWN);
  pinMode(GPIO16, INPUT_PULLDOWN);
  pinMode(GPIO17, INPUT_PULLDOWN);
  pinMode(GPIO19, INPUT_PULLDOWN);
  pinMode(GPIO21, INPUT_PULLDOWN);
  pinMode(GPIO22, INPUT_PULLDOWN);
  pinMode(GPIO25, INPUT_PULLDOWN);
  pinMode(GPIO26, INPUT_PULLDOWN);
  pinMode(GPIO27, INPUT_PULLDOWN);

  GPIO14_state = digitalRead(GPIO14);
  GPIO15_state = digitalRead(GPIO15);
  GPIO16_state = digitalRead(GPIO16);
  GPIO17_state = digitalRead(GPIO17);
  GPIO19_state = digitalRead(GPIO19);
  GPIO21_state = digitalRead(GPIO21);
  GPIO22_state = digitalRead(GPIO22);
  GPIO25_state = digitalRead(GPIO25);
  GPIO26_state = digitalRead(GPIO26);
  GPIO27_state = digitalRead(GPIO27);

  GPIO32_state = analogRead(GPIO32);
  GPIO33_state = analogRead(GPIO33);
  GPIO34_state = analogRead(GPIO34);
  GPIO35_state = analogRead(GPIO35);
  GPIO36_state = analogRead(GPIO36);
  GPIO39_state = analogRead(GPIO39);
}

void loop() {
  // read the state of the pushbutton value
  GPIO14_state = digitalRead(GPIO14);
  GPIO15_state = digitalRead(GPIO15);
  GPIO16_state = digitalRead(GPIO16);
  GPIO17_state = digitalRead(GPIO17);
  GPIO19_state = digitalRead(GPIO19);
  GPIO21_state = digitalRead(GPIO21);
  GPIO22_state = digitalRead(GPIO22);
  GPIO25_state = digitalRead(GPIO25);
  GPIO26_state = digitalRead(GPIO26);
  GPIO27_state = digitalRead(GPIO27);

  GPIO32_state = analogRead(GPIO32);
  GPIO33_state = analogRead(GPIO33);
  GPIO34_state = analogRead(GPIO34);
  GPIO35_state = analogRead(GPIO35);
  GPIO36_state = analogRead(GPIO36);
  GPIO39_state = analogRead(GPIO39);

  print_state(GPIO14_str, GPIO14_state);
  print_state(GPIO15_str, GPIO15_state);
  print_state(GPIO16_str, GPIO16_state);
  print_state(GPIO17_str, GPIO17_state);
  print_state(GPIO19_str, GPIO19_state);
  print_state(GPIO21_str, GPIO21_state);
  print_state(GPIO22_str, GPIO22_state);
  print_state(GPIO25_str, GPIO25_state);
  print_state(GPIO26_str, GPIO26_state);
  print_state(GPIO27_str, GPIO27_state);
  print_state(GPIO32_str, GPIO32_state);
  print_state(GPIO33_str, GPIO33_state);
  print_state(GPIO34_str, GPIO34_state);
  print_state(GPIO35_str, GPIO35_state);
  print_state(GPIO36_str, GPIO36_state);
  print_state(GPIO39_str, GPIO39_state);
  Serial.println("///////////////");

  delay(1000);
}

void print_state(String name, int state){
  Serial.print(name);
  Serial.print(": ");
  Serial.println(state);
}