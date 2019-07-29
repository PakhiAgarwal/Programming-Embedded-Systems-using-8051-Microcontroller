#include<reg51.h>
//sbit ip1=P1^0;
//sbit ip2=P1^1;
//sbit op1=P2^0;
//sbit op2=P2^1;
sbit a=P3^0;
sbit b=P3^1;
sbit c=P3^2;
sbit d=P3^3;
void delay(int x);
void main()
{
unsigned int i;
while(i<200)
{
//ip1=0;ip2=1;
//delay(70);
a=1;b=0;c=0;d=1;
delay(30);
//ip1=1;ip2=0;
//delay(70);
a=1;b=1;c=0;d=0;
delay(70);
//ip1=0;ip2=1;
//delay(70);
a=0;b=1;c=1;d=0;
delay(70);
//ip1=1;ip2=0;
//delay(70);
a=0;b=0;c=1;d=1;
//ip1=0;ip2=1;
//delay(70);
//ip1=1;ip2=0;
//delay(30);
//ip1=0;ip2=1;
//delay(50);
//ip1=1;ip2=0;
//delay(50);
}
}
void delay(int x)
{
unsigned int a,b;
for(a=0;a<40000;a++);
for(b=0;b<x;b++);
}