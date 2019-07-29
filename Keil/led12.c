 #include<reg51.h>
 sbit a=P1^0;
sbit b=P1^1;
void main()
 {
 unsigned int x;
 while(1)
{
 a=1;b=0;
for(x=0;x<40000;x++);
 a=0;b=1;
 for(x=0;x<40000;x++);
}}