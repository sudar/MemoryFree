/*
 Sample sketch to demonstrate Memory Free Arduino Library
 
 This sketch prints the amount of free memory currently available in Arduino
 
 Libraries needed:

 - MemoryFree library - https://hardwarefun.com/projects/memory-free
 
 Circuit:

    You don't need any circuit, but need the Arduino board

 Author: 

    Sudar - <http://sudarmuthu.com> <http://hardwarefun.com>
    Refer to http://hardwarefun.com/projects/memory-free
 
License:
 
     BeerWare ;)
 */
#include <MemoryFree.h>

// Reported free memory with str commented out in Arduino UNO:
// 1822 bytes
//
// Reported free memory with str and Serial.println(str) uncommented:
// 1808
//
// Difference: 14 bytes (13 ascii chars + null terminator

// 14-bytes string
//char str[] = "Hello, world!";

void setup() {
    Serial.begin(9600);
}


void loop() {
    //Serial.println(str);

    Serial.print("Free Memory = ");
    Serial.println(getFreeMemory());

    delay(1000);
}
