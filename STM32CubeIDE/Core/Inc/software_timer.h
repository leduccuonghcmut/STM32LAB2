/*
 * software_timer.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

//extern int timer0_flag;
//
//void setTimer0(int duration);
//void timer_run();
extern int timer_flag[10];

void setTimer(int i, int duration);
void timer_run(int i);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
