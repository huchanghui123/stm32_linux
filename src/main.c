#include "stm32f10x.h"
#include "led.h"
//#include "usart1.h"

void Delay(__IO u32 nCount); 

int main(void)
{    
    SystemInit();	// ����ϵͳʱ��Ϊ72M 	
    LED_GPIO_Config(); //LED �˿ڳ�ʼ�� 
    //USART1_Config();//USART1 ����

  while (1)
  {
    // UART1Test();
    LED1( ON );			  // ��
    Delay(0x400000);
    LED1( OFF );		  // ��
    Delay(0x400000);
    LED1( ON );
    Delay(0x400000);
    LED1( OFF );



    LED2( ON );
    Delay(0x400000);
    LED2( OFF ); 
    Delay(0x400000); 
    LED2( ON );
    Delay(0x400000);
    LED2( OFF);
  }
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 



