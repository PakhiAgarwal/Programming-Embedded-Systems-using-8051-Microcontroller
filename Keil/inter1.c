#include<reg51.h>
sbit a=P1^0;
void main()
{
TMOD=0x10;
TH1=0x3C;
TL1=0xFD;
TR1=1;
while(TF1==0);
TF1=0;TR1=0;
IE=0x88;
//a=1;
}
void cr()interrupt 0
{
unsigned int i;
for(i=0;i<5;i++)
{
a=0;
a=1;
}
}