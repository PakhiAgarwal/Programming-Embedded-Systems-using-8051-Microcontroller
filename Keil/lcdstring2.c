#include<reg51.h>
#define LCD P1
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
void delay(unsigned int x);
void fun();
void call();
void main()
{
unsigned char p[5],i;
for(i=0;i<5;i++)
{
TMOD=0x20;
TH1=-3;
SCON=0x50;
TR1=1;
while(RI==0);
p[i]=SBUF;
//SBUF=p[i];
}
RI=0;

//TR1=0;
  
LCD=0x38;
fun();
LCD=0x0E;
fun();
LCD=0x06;
fun();
LCD=0x80;
fun();
for(i=0;i<5;i++)
{

LCD=p[i];  
call();
}
 }
void delay(unsigned int x)
{
unsigned int i,j;
for(i=0;i<1275;i++)
for(j=0;j<x;j++);
}
void fun()
{
rs=0;rw=0;en=1;
delay(20);
en=0;
}
void call()
{
rs=1;rw=0;en=1;
delay(20);
en=0;	 
}