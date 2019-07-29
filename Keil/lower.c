 #include<reg51.h>
sbit a=P1^0;
sbit b=P1^1;
sbit c=P1^2;
sbit d=P1^3;
sbit e=P1^4;
sbit f=P1^5;
sbit g=P1^6;
sbit h=P1^7;
void main()
 {
 unsigned int x;
 while(1)
{
 a=0;b=0;c=0;d=0;e=1;f=1;g=1;h=1;
for(x=0;x<40000;x++);
 }}