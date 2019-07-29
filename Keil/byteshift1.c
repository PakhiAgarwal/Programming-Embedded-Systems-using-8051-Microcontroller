 #include<reg51.h>
#define LED P1
void main()
 {
 unsigned int y;
unsigned char x,i;
x=0x80; 
while(1)
{
for(i=7;i<8;i--)
{
LED=x;
 for(y=0;y<40000;y++);
x=x>>1;
 }
 }
 }