#include "intrins.h"
#include "codetab.h"
#include "oled.h"

void main(void)
{
	unsigned char i;

	OLED_Init(); //OLED初始化
	for(;;)								//单页面  while 会一直刷  for不会
	{
		OLED_Fill(0xff); //屏全亮
		delay(2000);
		OLED_Fill(0x00); //屏全灭
		delay(200);

		Draw_BMP(0,0,128,8,BMP2);						
		delay(8000);
//			OLED_CLS();//清屏
	}
}
