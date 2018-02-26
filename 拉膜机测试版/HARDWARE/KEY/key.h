#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"

#define KEY1 PEin(0)		//读取KEY1
#define KEY2 PEin(1)		//读取KEY2
#define KEY3 PEin(2)		//读取KEY3
#define KEY4 PEin(3)		//读取KEY4
#define KEY5 PEin(4)		//读取KEY5
#define KEY6 PEin(7)		//读取KEY6
#define KEY7 PEin(8)		//读取KEY7

#define KEY1_PRES		1		//KEY1按下
#define KEY2_PRES		2		//KEY2按下
#define KEY3_PRES		3		//KEY3按下
#define KEY4_PRES		4		//KEY4按下
#define KEY5_PRES		5		//KEY5按下
#define KEY6_PRES		6		//KEY6按下
#define KEY7_PRES		7		//KEY7按下



void KEY_Init(void);//IO初始化
u8 KEY_Scan(u8);  	//按键扫描函数					    
#endif
