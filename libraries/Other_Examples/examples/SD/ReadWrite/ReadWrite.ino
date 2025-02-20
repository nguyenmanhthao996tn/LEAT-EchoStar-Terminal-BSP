/*
  SD CARD READ/WRITE

  This example shows how to read and write data to and from an SD card file.

  This source code is integrated into the LEAT EchoStar Terminal BSP, all SDCard pin are pre-defined.
  No change / mapping needed.

  created   Nov 2010
  by David A. Mellis
  modified 9 Apr 2012
  by Tom Igoe
  modified 19 Feb 2025
  by mtnguyen

  This example code is in the public domain.

*/

#include <SPI.h>
#include <SD.h>

File myFile;

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

  if (!SD.begin(chipSelect)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");

  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open("test.txt", FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }

  // re-open the file for reading:
  myFile = SD.open("test.txt");
  if (myFile) {
    Serial.println("test.txt:");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}

void loop(void) {
  // nothing happens after setup
}
