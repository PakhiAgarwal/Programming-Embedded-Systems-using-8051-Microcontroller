#include<reg51.h>
#define LED P1
void main()
{
unsigned int y,z,j;
unsigned char x,i;
x=0x01;
z=0x80;
while(1)
{
for(i=0;i<8;i++)
{
for(j=7;j<8;j--)
{
//LED=z;
LED=x;
for(y=0;y<40000;y++);
x=x<<1;
z=z>>1;

 }
} }
 }