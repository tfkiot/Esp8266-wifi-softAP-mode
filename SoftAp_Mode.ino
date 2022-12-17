#include<ESP8266WiFi.h>   

#define WIFI_SSID "NodeMCU"        
#define WIFI_PSWD "00000000"      

void setup() {
 Serial.begin(115200);               

 Serial.println(" ");
 Serial.println(" Starting NodeMCU AccessPoint... ");
 WiFi.softAP(WIFI_SSID, WIFI_PSWD);    
 
 IPAddress ip = WiFi.softAPIP();
 Serial.print("IPAddress: ");
 Serial.println(ip);
}
void loop() {
  // put your main code here, to run repeatedly:
}
