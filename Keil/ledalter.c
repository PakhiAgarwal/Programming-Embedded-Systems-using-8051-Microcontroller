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
 a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;
for(x=0;x<40000;x++);
 a=1;
 for(x=0;x<40000;x++);
a=0;b=1;
 for(x=0;x<40000;x++);
b=0;c=1; 
for(x=0;x<40000;x++);
c=0;d=1; 
for(x=0;x<40000;x++);
d=0;e=1; 
for(x=0;x<40000;x++);
e=0;f=1; 
for(x=0;x<40000;x++);
f=0;g=1;
 for(x=0;x<40000;x++);
g=0;h=1; 
for(x=0;x<40000;x++);
 }}