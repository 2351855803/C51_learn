#include <REGX52.H>


//*************************************************

//功能：串口初始化
//返回类型：void
//形参：void

//*************************************************


void UART_Initial()
{
	SCON = 0x50;
	PCON |= 0x80;
	TMOD &= 0x0f;
	TMOD |= 0x20;
	TH1 = 0xf4;
	TL1 = 0xf4;
	TR1 = 1;
	ET1 = 0;
	ES = 1;
	EA = 1;
	
}


//*************************************************

//功能：发送
//返回类型：void
//形参：unsigned char 

//*************************************************

void UART_Send(unsigned char byte)
{

	SBUF = byte;
	while(!TI);
	TI = 0;

}













