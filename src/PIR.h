#include <Arduino.h>
#include "Define.h"

extern bool pet_in_room; //True -> pet in room, False -> pet not in room
extern bool PIR_on; //True-> on, False -> off

int timer = 0;

void PIR(void *param) {
    while(1) {
        if (true) {
            int pir = digitalRead(PIR_pin);
            Serial.println(pir);
            /*
            if (pir == 0) { //PIR sensor detects pet
                pet_in_room = true;
                timer += 1; //count time
            }
            else {
                pet_in_room = false;
                //POST to server
                timer = 0;
            }
            */
            delay(300);
        }
    }
}