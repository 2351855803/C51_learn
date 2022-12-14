//STC89C52 定时器个数 T0 T1 T2

//不同型号可能定时器个数操作不同
//T0 T1 与传统8051单片机兼容
//T2 此型号单独增加的资源
//		
//		
//***********************************************  四种工作模式
//模式0：13位定时器 计数器
//模式1：16位定时器 计数器（常用）   *****
//模式2：8位自动重装模式
//模式3：两个8位计数器



//*********************************************** 

//模式1：16位定时器 计数器 
//最高存储 2^16-1 65535

//脉冲为外接晶振决定 此开发板为12MHz
//（原理图可知：可以由系统时钟(SYSclk)来加一，或者通过外接()，则此为计数器）
//12分频：12M/12 = 1MHz  1us
//6分频：

//选择开关：
//		  -
//	   C	  T
//      计数 定时
//	   1    0

//TL0(8bit)      TH0(8bit)
//00000000	   00000000


//*********************************************** 	中断系统
//定义：
//	系统为了使CPU可以处理紧急事件。
//	处理完紧急事件后，回到系统运行原本地点。
//	
//中断嵌套：
//	在执行中断时，如果又有一个中断，且优先级更高，则进行此中断，执行完再返回低级中断。
//	












