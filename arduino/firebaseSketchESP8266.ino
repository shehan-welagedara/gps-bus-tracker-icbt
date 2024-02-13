#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
#include <NMEAGPS.h>
#include "ESP8266Firebase.h"

#define WIFI_SSID "your_WiFi_SSID"
#define WIFI_PASSWORD "your_WiFi_password"
#define GPS_RXPin 12
#define GPS_TXPin 13

SoftwareSerial gpsSerial(GPS_RXPin, GPS_TXPin);
NMEAGPS gps;
Firebase firebase("your_firebase_project_name.firebaseio.com"); // Replace with your Firebase project URL

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
    delay(250);
    Serial.print(".");
  }

  Serial.println("\nConnected to WiFi");
  gpsSerial.begin(9600);
}

void loop() {
  while (gpsSerial.available() > 0) {
    if (gps.decode(gpsSerial.read())) {
      gps_fix fix = gps.read();
      if (fix.valid.location) {
        String latitude = String(fix.latitude(), 6);
        String longitude = String(fix.longitude(), 6);

        // Additional data
        String vehicleNumberPlate = "ABC123";
        String driverContactNumber = "+123456789";
        String vehicleName = "MyCar";

        // Construct JSON data
        String jsonData = "{";
        jsonData += "\"latitude\":\"" + latitude + "\",";
        jsonData += "\"longitude\":\"" + longitude + "\",";
        jsonData += "\"vehicleNumberPlate\":\"" + vehicleNumberPlate + "\",";
        jsonData += "\"driverContactNumber\":\"" + driverContactNumber + "\",";
        jsonData += "\"vehicleName\":\"" + vehicleName + "\"";
        jsonData += "}";

        // Send data to Firebase
        sendToFirebase(jsonData);

        Serial.println("Data sent to Firebase successfully");
      } else {
        Serial.println("GPS location not valid");
      }
    }
  }

  delay(10000); // Update data every 10 seconds
}

void sendToFirebase(String jsonData) {
  int responseCode = firebase.setString("/your_firebase_collection_name", jsonData); // Replace with your Firebase collection name

  if (responseCode == 200) {
    Serial.println("Data sent to Firebase successfully");
  } else {
    Serial.println("Failed to send data to Firebase");
  }
}
