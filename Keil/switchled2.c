#include<reg51.h>
sbit a=P1^0;
sbit b=P1^1;
sbit c=P1^2;
void delay(int x);
void main()
{
unsigned int d;
a=0;b=1;c=1;
while(1)
{
for(d=0;d<15;d++)
{ 
if((a==0)&&(d%2==0))	  //even
{	 
delay(20);
c=0;b=1;
}
else if((a==0)&&(d%2!=0))	   //odd
{delay(20);
c=1;b=0;
}
else
{
c=1;b=1;
}
}d++;}}
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++);
for(j=0;j<x;j++);
}



