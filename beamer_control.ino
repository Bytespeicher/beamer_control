#include <IRremote.h>

int incomingByte = 0;

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    switch (incomingByte) {
      case 'p': // power
        irsend.sendNEC(0x10C8E11E,32);
        break;
      case 'd': // 3d
        irsend.sendNEC(0x10C851AE,32);
        break;
      case 'h': // hide
        irsend.sendNEC(0x10C8F10E,32);
        break;
      case 'a': // Aspect
        irsend.sendNEC(0x10C806F9,32);
        break;
      case 'r': // resync
        irsend.sendNEC(0x10C8B14E,32);
        break;
      case 's': // source
        irsend.sendNEC(0x10C831CE,32);
        break;
      case 'z': // zoom
        irsend.sendNEC(0x10C8D12E,32);
        break; 
      case 'n': // mute
        irsend.sendNEC(0x10C88679,32);
        break;
      case 'e': // eeeee
        irsend.sendNEC(0x10C801FE,32);
        break; 
      case 'o': // up
        irsend.sendNEC(0x10C841BE,32);
        break;
      case 'k': // left
        irsend.sendNEC(0x10C8C13E,32);
        break;
      case ' ': // menu
        irsend.sendNEC(0x10C821DE,32);
        break;
      case 'l': // right
        irsend.sendNEC(0x10C8817E,32);
        break;
      case ',': // Down
        irsend.sendNEC(0x10C8A15E,32);
        break;
      case '1': // 1
        irsend.sendNEC(0x10C85AA5,32);
        break;
      case '2': // 2
        irsend.sendNEC(0x10C8DA25,32);
        break;
      case '3': // 3
        irsend.sendNEC(0x10C83AC5,32);
        break;
      case '#': // PgUp
        irsend.sendNEC(0x10C8BA45,32);
        break;
      case '4': // 4
        irsend.sendNEC(0x10C8A659,32);
        break;
      case '5': // 5
        irsend.sendNEC(0x10C86699,32);
        break;
      case '6': // 6
        irsend.sendNEC(0x10C8E619,32);
        break;
      case '-': // PgDn
        irsend.sendNEC(0x10C87986,32);
        break;
      case '7': // 7
        irsend.sendNEC(0x10C87A85,32);
        break;
      case '8': // 8
        irsend.sendNEC(0x10C852AD,32);
        break;
      case '9': // 9
        irsend.sendNEC(0x10C8D22D,32);
        break;
      case '0': // 0
        irsend.sendNEC(0x10C8FA05,32);
        break;
      
      default: 
        Serial.print("I received: ");
        Serial.println(incomingByte, DEC);
        break;
    }
    delay(1000);
  }
}
