#include <REGX52.H>

//*************************************************

//串口初始化
//修改：
//     SCON = 0x40 -> 0x50
//	 使可以接受数据
//	 接受数据进入中断，相比发送初始化，增加中断初始化

//*************************************************
void Uart_Init()
{
	SCON = 0x50;
	PCON |= 0x80;
	TMOD &= 0x0f;
	TMOD |= 0x20;
	TH1 = 0xf4;
	TL1 = 0xf4;
	TR1 = 1;
	ET1 = 0;
	//修改
	ES = 1;
	EA = 1;
}

//*************************************************

//功能：通过串口发送一个字节
//返回类型：无
//形参：无符号字节

//*************************************************
void UART_Send(unsigned char send)
{
	SBUF = send;
	while(0 == TI);
	TI = 0;
}


