#include <STC8HX.h>
uint32 sys_clk = 24000000;//设置PWM、定时器、串口、EEPROM频率参数

void setup()
{
  P1M1&=~0x20;P1M0&=~0x20;//双向IO口
}

void loop()
{
  P1_5 = 1;
}

void main(void)
{
  setup();
  while(1){
    loop();
  }
}