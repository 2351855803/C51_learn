#include <REGX52.H>
#include <intrins.h>
#include "Delay.h"

//����Ĵ���
#define Lcdout P0


//��������
sbit RS = P2^6;
sbit RW = P2^5;
sbit EN = P2^7;



//------------------------------------------------------------------------------------
//----------------------------  Write_cmd �� Write_data �����RS��ƽ
//��������  RS = 0
Write_cmd(unsigned char cmd)
{

	RS = 0;
	RW = 0;
	EN = 0;

	//��Ƭ����Ҫ���͵����ݷŵ�����������
	Lcdout = cmd;
	
	EN = 1;
	
	_nop_();

      EN = 0;
	
	Delayms(1);

	
}
//------------------------------------------------------------------------------------
//�������� RS = 1
Write_data(unsigned char cmd)
{

	RS = 1;
	RW = 0;
	EN = 0;

	//��Ƭ����Ҫ���͵����ݷŵ�����������
	Lcdout = cmd;
	
	EN = 1;
	
	_nop_();

      EN = 0;
	
	Delayms(1);
	

}
//------------------------------------------------------------------------------------
Lcd_initial()
{

	Write_cmd(0x38);
	Write_cmd(0x0c);
	
	Write_cmd(0x06);
	Write_cmd(0x01);
	
	Delayms(1);
	
	
}
