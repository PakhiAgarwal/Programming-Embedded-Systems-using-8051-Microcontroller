 #include<reg51.h>
#define LED P2
void main()
 {
 unsigned int y;
unsigned char x,i;
x=0x04;
x=x+0x01; 
for(i=0;i<4;i++)
{
LED=x;
 for(y=0;y<40000;y++);
x=x>>2;
x=x+1;
 }
for(i=4;i<8;i--)
{
LED=x;
for(y=0;y<40000;y++);
x=x<<2;
x=x-1;
}
while(1)
}