#include "intrins.h"
#include "codetab.h"
#include "oled.h"

void main(void)
{
	unsigned char i;

	OLED_Init(); //OLED��ʼ��
	for(;;)								//��ҳ��  while ��һֱˢ  for����
	{
		OLED_Fill(0xff); //��ȫ��
		delay(2000);
		OLED_Fill(0x00); //��ȫ��
		delay(200);

		Draw_BMP(0,0,128,8,BMP2);									///////////*����ҳ*////////
		delay(8000);
//			OLED_CLS();//����
	}
}
