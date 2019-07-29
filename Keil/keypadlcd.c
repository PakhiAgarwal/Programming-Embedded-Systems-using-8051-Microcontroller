#include<reg51.h>
#define LCD P3
sbit a=P1^0;
sbit b=P1^1;
sbit c=P1^2;
sbit d=P1^3;
sbit e=P1^4;
sbit f=P1^5;
sbit g=P1^6;
sbit h=P1^7;
sbit i=P2^0;
sbit j=P2^1;
sbit k=P2^2;
sbit l=P2^3;
sbit m=P2^4;
sbit n=P2^5;
sbit o=P2^6;
sbit p=P2^7;
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void call();
void fun();
void show();
void left();
void right();
void converge();
void diverge();
void delay(int t);
unsigned int v;
void main()
{
LCD=0x38;
call();
LCD=0x0E;
call();
LCD=0x06;
call();
LCD=0x80;
call();
show();
P2=0x0F;
while(1)
{
P2=0xFE;
if(m==0)
{
left();
}
if(n==0)
{
right();
}
if(o==0)
{
converge();
}
if(p==0)
{
diverge();
}
P2=0xFD;
if(m==0)
{
left();
}
if(n==0)
{
right();
}
if(o==0)
{
converge();
}
if(p==0)
{
diverge();
}
P2=0xFC;
if(m==0)
{
left();
}
if(n==0)
{
right();
}
if(o==0)
{
converge();
}
if(p==0)
{
diverge();
}
P2=0xFB;
if(m==0)
{
left();
}
if(n==0)
{
right();
}
if(o==0)
{
converge();
}
if(p==0)
{
diverge();
}
P2=0xFA;
if(m==0)
{
left();
}
if(n==0)
{
right();
}
if(o==0)
{
converge();
}
if(p==0)
{
diverge();
}
}
}
void left()
{
	a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
 	delay(20);
	
	 g=1;h=0;
 	delay(20);
 
	g=0;f=1;
 	delay(20);
	 
	f=0;e=1; 
 	delay(20);
	
	e=0;d=1; 
 	delay(20);
	
	d=0;c=1; 
 	delay(20);
	
	c=0;b=1; 
 	delay(20);
	
	b=0;a=1;
 	delay(20);
	}
  void right()
  {
           	a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=0;
 	delay(20);

		 b=1;a=0;
 	delay(20);
 	
	c=1;b=0;
 	delay(20);
	
	c=0;d=1; 
 	delay(20);
	
	d=0;e=1; 
 	delay(20);

	e=0;f=1; 
 	delay(20);
	
	f=0;g=1; 
 	delay(20);

	g=0;h=1;
 	delay(20);
	}
	void converge()
	{
	    
    a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
	delay(20);
	 h=0;a=0;b=1;g=1;
 	delay(20);
	g=0;b=0;c=1;f=1;
	 delay(20);
	c=0;f=0;d=1;e=1; 
	 
	 }
void diverge()
{
	   	
    a=0;b=0;c=0;d=1;e=1;f=0;g=0;h=0;
	delay(20);
	 d=0;e=0;c=1;f=1;
 	delay(20);
	g=1;b=1;c=0;f=0;
delay(20);
	b=0;g=0;a=1;h=1; 
	  }

 void delay(int t)
 {
 unsigned int y,z;
 for(y=0;y<40000;y++);
 for(z=0;z<t;z++);
 }
 void call()
{
rs=0;rw=0;en=1;
delay(20);
en=0;
}
void fun()
{
rs=1;rw=0;en=1;
delay(20);
en=0;
}
void show()
{
char pa[5]={"HELLO"};
for(v=0;v<5;v++)
{
LCD=pa[v];
fun();
}
}