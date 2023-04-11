#include <Blynk.h>
//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_TEMPLATE_ID "TMPL6pd78ZBLT"
#define BLYNK_TEMPLATE_NAME "SmartFarm"
#define BLYNK_AUTH_TOKEN "uD2YVdSib9UHdqrteYVETSV2f1Wj2ADf" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Buratsakorn_wifi";//Enter your WIFI name
char pass[] = "Wassana#@1";//Enter your WIFI password

int pump1 = D7;
int pump2 = D8;

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(pump1, param.asInt());
}
BLYNK_WRITE(V1) {
  digitalWrite(pump2, param.asInt());
}
void setup() {
  //Set the LED pin as an output pin
  pinMode(pump1, OUTPUT);
  pinMode(pump2, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
