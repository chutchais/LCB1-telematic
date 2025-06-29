// #include <Arduino.h>
// #include <Wire.h>

// void setup() {
//   Serial.begin(115200);
//   Wire.begin(25, 26);  // SDA = GPIO25, SCL = GPIO26

//   Serial.println("Scanning I2C bus...");
//   byte error, address;
//   int count = 0;

//   for (address = 1; address < 127; address++) {
//     Wire.beginTransmission(address);
//     error = Wire.endTransmission();

//     if (error == 0) {
//       Serial.print("I2C device found at 0x");
//       Serial.println(address, HEX);
//       count++;
//     }
//   }

//   if (count == 0) Serial.println("No I2C devices found.");
//   else Serial.printf("Found %d device(s)\n", count);
// }

// // void loop() {}



// #include <Arduino.h>
// #include <Wire.h>
// #include <RTClib.h>
// #include "time.h"

// RTC_DS3231 rtc;
// bool rtcAvailable = true;

// void show_time(Stream &out) {
//   DateTime now = rtc.now();
//   out.printf("%04d/%02d/%02d %02d:%02d:%02d\n",
//                 now.year(), now.month(), now.day(),
//                 now.hour(), now.minute(), now.second());
// }

// void setup() {
//   Serial.begin(115200);
//   Wire.begin(25, 26);  // SDA = GPIO25, SCL = GPIO26

//   Serial.println("Scanning I2C bus...");
//   byte error, address;
//   int count = 0;

//   delay(1000); // Wait for Serial to initialize

//   if (!rtc.begin()) {
//     Serial.println("RTC not found!");
//     rtcAvailable = false;
//   }else {
//     show_time(Serial);
//     printf("RTC initialized successfully.\n");
//   }

  
// }



// void loop() {}
