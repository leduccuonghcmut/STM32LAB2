#include "main.h"
#ifndef INC_LED_EXERCISE5_H_
#define INC_LED_EXERCISE5_H_

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
extern int hour;
extern int minute;
extern int second;

void display7SEG(int num);
void update7SEG(int index);
void updateClockBuffer();

#endif
