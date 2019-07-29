#include<reg51.h>
sbit ip1=P1^0;
sbit ip2=P1^1;
sbit op1=P2^0;
sbit op2=P2^1;
void delay(int x);
void main()
{
unsigned int i;
while(i<200)
{
op1=1;op2=1;
delay(30);
ip1=0;ip2=0;
delay(70);
ip1=1;ip2=0;
delay(70);
ip1=1;ip2=1;
delay(70);
ip1=1;ip2=0;
delay(30);
ip1=1;ip2=0;
delay(50);
ip1=1;ip2=0;
delay(50);
}
}
void delay(int x)
{
unsigned int a,b;
for(a=0;a<40000;a++);
for(b=0;b<x;b++);
}