#include<reg51.h>
#define LCD P1
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
//sbit g=P0^0;
void delay(unsigned int x);
//void str();
void main()
{unsigned char p;

TMOD=0x20;
TH1=-3;
SCON=0x50;
TR1=1;
while(RI==0);
p=SBUF;
RI=0;
TR1=0;

LCD=0x38;
rs=0;rw=0;en=1;
delay(30);
en=0;
LCD=0x0E;
rs=0;rw=0;en=1;
delay(30);
en=0;
LCD=0x06;
rs=0;rw=0;en=1;
delay(30);
en=0;
LCD=0x80;
rs=0;rw=0;en=1;
delay(30);
en=0;
LCD=p;
rs=1;rw=0;en=1;
delay(30);
en=0;
}
/*void delay()
{

TMOD=0x20;
TH1=-3;
SCON=0x50;
TR1=1;
while(RI==0);
RI=0;
TF1=0;
} 
void str()
{
//unsigned char a[5],sbuf;
unsigned char sbuf;
//unsigned int i;

//for(i=0;i<5;i++)
//{
//a[i]="HELLO";
//sbuf=a[i];
sbuf='A';
txd=sbuf;
rxd=txd;
} */
void delay(unsigned int x)
{
unsigned int i,j;
for(i=0;i<40000;i++);
for(j=0;j<x;j++);
}

