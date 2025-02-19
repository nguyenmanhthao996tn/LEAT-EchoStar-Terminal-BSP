/*
  SD CARD DATALOGGER

  This example shows how to log data from three analog sensors
  to an SD card using the SD library.

  This source code is integrated into the LEAT EchoStar Terminal BSP, all SDCard pin are pre-defined.
  No change / mapping needed.

  created  24 Nov 2010
  modified 9 Apr 2012
  by Tom Igoe
  modified 19 Feb 2025
  by mtnguyen

  This example code is in the public domain.

*/

#include <SPI.h>
#include <SD.h>

const int chipSelect = SDCARD_SS_PIN;

void setup(void) {
  // Power on the SD Card, SD Card use the same power rail as sensors
  pinMode(SENSORS_PWR_ENABLE_PIN, OUTPUT);
  digitalWrite(SENSORS_PWR_ENABLE_PIN, HIGH);

  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.print("Initializing SD card...");

  // see if the card is present and can be initialized:
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    // don't do anything more:
    while (1);
  }
  Serial.println("card initialized.");
}

void loop(void) {
  // make a string for assembling the data to log:
  String dataString = "";

  // read three sensors and append to the string:
  for (int analogPin = 0; analogPin < 3; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 2) {
      dataString += ",";
    }
  }

  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  File dataFile = SD.open("datalog.txt", FILE_WRITE);

  // if the file is available, write to it:
  if (dataFile) {
    dataFile.println(dataString);
    dataFile.close();
    // print to the serial port too:
    Serial.println(dataString);
  }
  // if the file isn't open, pop up an error:
  else {
    Serial.println("error opening datalog.txt");
  }
}
