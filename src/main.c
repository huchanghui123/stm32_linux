#include "stm32f10x.h"
#include "led.h"
//#include "usart1.h"

void Delay(__IO u32 nCount); 

int main(void)
{    
    SystemInit();	// 配置系统时钟为72M 	
    LED_GPIO_Config(); //LED 端口初始化 
    //USART1_Config();//USART1 配置

  while (1)
  {
    // UART1Test();
    LED1( ON );			  // 亮
    Delay(0x400000);
    LED1( OFF );		  // 灭
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



