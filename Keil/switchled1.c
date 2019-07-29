#include<reg51.h>
sbit a=P1^0;
sbit b=P1^1;
void delay(int x);
void main()
{
a=1;b=1;
while(1)
{
if(a==0)
{
delay(50);
b==0;
}}}
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++);
for(j=0;j<x;j++);
}