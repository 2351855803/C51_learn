#include <REGX52.H>


//*************************************************

//功能：定时器0初始化
//返回类型：无
//形参：无

//*************************************************

void Timer0_Init()
{
	
	TMOD &= 0xf0;
	TMOD |= 0x01;
	
	TF0 = 0;
	TR0 = 1;
	
	//0.065
	TH0 = (65535-10000)/256;
	TL0 = (65535-10000)%256;
	
	//中断
	
	ET0 = 1;
	EA = 1;
	
}