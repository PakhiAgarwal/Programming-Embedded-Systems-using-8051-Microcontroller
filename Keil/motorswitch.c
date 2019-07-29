#include<reg51.h>
sbit ip1=P1^0;
sbit ip2=P1^1;
sbit ip3=P1^2;
sbit ip4=P1^3;
sbit op1=P2^0;
sbit op2=P2^1;
sbit op3=P2^2;
sbit op4=P2^3;
sbit a=P0^0;
sbit b=P0^1;
void delay(int x);
void main()
{
unsigned int i;
while(i<200)
{
op1=1;op2=0;op3=1;op4=0;
delay(30);
if(a==0&&b==0)
{
ip1=0;ip2=0;ip2=0;ip3=0;						
delay(70);
}
if(a==0&&b==1)
{
ip1=1;ip2=0;ip3=0;ip4=0;
delay(70);
}
if(a==1&&b==0)
{
ip1=0;ip2=0;ip3=1;ip4=0;
delay(70);
}
if(a==1&&b==1)
ip1=0;ip2=1;ip3=0;ip4=1;
delay(30);
}
}

void delay(int x)
{
unsigned int a,b;
for(a=0;a<40000;a++);
for(b=0;b<x;b++);
}