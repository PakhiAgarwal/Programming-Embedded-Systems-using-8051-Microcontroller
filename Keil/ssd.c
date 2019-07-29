#include<reg51.h>
#define SSD P1
void delay(int x);
void main()
{
unsigned char i, A[ ]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
for(i=0; i<10;i++)
{
SSD=A[i];
delay(100);
}
while(1);
}
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++);
for(j=0;j<x;j++);
}