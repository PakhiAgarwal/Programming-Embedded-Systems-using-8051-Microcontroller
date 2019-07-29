#include<reg51.h>
//void str();
void main()
{
unsigned char a[]={"HEllO"},i;
//unsigned int i;
for(i=0;i<5;i++)
{
//a[i]="HELLO";
//SBUF=a[i];

TMOD=0x20;
TH1=-3;
SCON=0x50;
//str();
SBUF=a[i];
TR1=1;
while(TI==0);
}
TI=0;// TR1=0;
while(1);
//TR1=0;
}  
/*void str()
{
unsigned char a[10],i;
//unsigned int i;
for(i=0;i<5;i++)
{
a[i]="HELLO";
SBUF=a[i];
}
} */