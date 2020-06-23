#include <ESP8266WiFi.h>
void setup() {
 Serial.begin(9600);
 WiFi.mode(WIFI_STA);
 WiFi.disconnect();
 Serial.println("Setup Complete");
}

void loop() {
  Serial.println("Scanning Networks....");
  int n = WiFi.scanNetworks();
  Serial.println("Scanning Complete");
  if(n==0){
    Serial.println("No Wifi Avaliable");
    }
  else{
    Serial.print(n);
    Serial.println(" Networks Found");
    for(int i=0; i<n;i++){
      Serial.print(WiFi.SSID(i));
      Serial.print("(");
      Serial.print(WiFi.RSSI(i));
      Serial.println(")");
      }
    }
   Serial.println("");
   delay(5000);  
}
