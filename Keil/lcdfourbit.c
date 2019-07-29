#include<reg51.h>
sbit rs=P1^0;
sbit en=P1^1;
#define LCD P1
void delay(unsigned int a);
void cmd_(unsigned char value)
{
unsigned char h,temp;
temp=value;
temp=temp&0xF0;
P1=temp;
rs=0;
en=1;
delay(10);
en=0;
h=value;
h=h<<4;
h=h&0xF0;
P1=1;
rs=0;
en=1;
delay(10);
en=0;
}
void delay(unsigned int a)
{
unsigned int x,y;
for(x=0;x<40000;x++);
for(y=0;y<a;y++);
}