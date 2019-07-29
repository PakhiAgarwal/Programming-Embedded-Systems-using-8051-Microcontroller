#include<reg51.h>
sbit a=P1^0;
sbit b=P1^1;
sbit c=P1^2;
sbit d=P1^3;
sbit e=P0^0;
void delay();
void main()
{
a=1;b=1;c=1;d=1;
if(e==0)

{a=1;b=0;c=1;d=0;
delay();
}
if(e==1)
{
a=0;b=1;c=0;d=1;
}
}
void delay()
{
//unsigned int thod,th1,tl1,tr1,tf1;
TMOD=0x50;
TH1=0xFF;
TL1=0xFF;
TR1=1;
while(TF1!=0);
TF1=0;
TR1=0;
}