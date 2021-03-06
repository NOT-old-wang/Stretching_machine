#ifndef __DISPLAY_H
#define __DISPLAY_H	
#include "oled.h"
#include "key.h"
#include "delay.h"

#define MENU_SIZE 50          //菜单长度


extern long move_mm;


void ui_start(void);           //OLED运行界面
void main_window(void);        //主界面    可选电机的速度和位移

void motor_distance(void);     //电机位移设置界面
void motor_distance_window(void);

void motor_speed(void);        //电机速度设置界面
void motor_speed_window(void);

void Start(void);
void motor_adjust(void);       //手动电机调整
void motor_adjust_window(void);//手动电机调整界面
#endif


