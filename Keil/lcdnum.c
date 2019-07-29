#include<reg51.h>
#define LCD P1
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
void delay(int x);
void new(unsigned int a);
void main()
{
LCD=0x38;
rs=0;rw=0;en=1;
delay(10);
en=0;
LCD=0x0E;
rs=0;rw=0;en=1;
delay(10);
en=0;
LCD=0x06;
rs=0;rw=0;en=1;
delay(10);
en=0;
LCD=0x80;
rs=0;rw=0;en=1;
delay(10);
en=0;
new(1234);
/*rs=1;rw=0;en=1;
delay(10);
en=0;
}*/
}
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++);
for(j=0;j<x;j++);
}
void new(unsigned int a)
{
unsigned int q;
//LCD_cmd(0x04);
while(a!=0)
{	 
a=q%10;
q=q/a;
}
//LCD_dat(a)

}
