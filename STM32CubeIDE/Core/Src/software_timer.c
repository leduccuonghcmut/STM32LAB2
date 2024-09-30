//#include "software_timer.h"
//
//int timer0_counter = 0;
//int timer0_flag = 0;
//int TIMER_CYCLE = 10;
//
//void setTimer0(int duration){
//	timer0_counter = duration /TIMER_CYCLE;
//	timer0_flag = 0;
//}
//
//void timer_run(){
//	if(timer0_counter > 0){
//		timer0_counter--;
//		if(timer0_counter == 0) timer0_flag = 1;
//	}
//}

/*
 * software_timer.c
 *
 *  Created on: Sep 28, 2023
 *      Author: Lenovo
 */


#include "software_timer.h"
#include "main.h"


int timer_counter[10] = {0};
int timer_flag[10] = {0};

void setTimer(int i, int duration){
	timer_flag[i] = 0;
	timer_counter[i] = duration;
}
void timer_run(int i){
	if(timer_counter[i] > 0){
		timer_counter[i]--;
		if(timer_counter[i] <= 0) timer_flag[i] = 1;
	}
}
void timerRun(){
	timer_run(0);
	timer_run(1);
	timer_run(2);
	timer_run(3);
}
