 #include<reg51.h>
#define LED P2
void main()
 {
 unsigned int y;
unsigned char x,i;
while(1) 
{
x=0x01;
for(i=0;i<8;i++)
{
LED=x;
for(y=0;y<40000;y++);
x=x<<1;
}
 }
}

