# Programming Embedded Systems using 8051 Microcontroller

### 1. Alternate Blinking of LED using Switch
<p align="center">
  <img width="460" height="300" src="Images/Alternate blinking of LED using Switch.JPG">
</p>

``` c

#include<reg51.h>
sbit a=P1^0; sbit b=P1^1; sbit c=P1^2; sbit d=P1^3; sbit e=P0^0;
void delay();
void main()
{
a=1;b=1;c=1;d=1;
if(e==0) 
{  a=1;b=0;c=1;d=0;
delay(); }
if(e==1) 
{  a=0;b=1;c=0;d=1;   } }
void delay()
{  TMOD=0x50;
TH1=0xFF; TL1=0xFF; TR1=1;
while(TF1!=0);
TF1=0; TR1=0; }

```

### 2. Working of multiple LEDs with multiple Switches
<p align="center">
  <img width="460" height="300" src="Images/Working of Multiple LEDs with Multiple Switches.JPG">
</p>

``` c
#include<reg51.h>
sbit a=P1^0; sbit b=P1^1; sbit c=P1^2; sbit d=P1^3; sbit e=P1^4; sbit f=P1^5; sbit g=P1^6;
sbit h=P1^7; sbit i=P2^0; sbit j=P2^1; sbit k=P2^2; sbit l=P2^3;
void left(); void right(); void converge(); void diverge();
unsigned int x;
void main()
 {
unsigned int o=1;
a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;i=0;j=0;k=0;l=0;
while(1)
{
 switch(o)
{ 
case 1:{					//left
           if(i==1&&o==1)
           { left();   o++;}	 break;  }
case 2: {					//right     
	if(j==1&&o==2)
            { right(); o++; } break;}
case 3: {					//converge     
	if(k==1&&o==3)
            { converge(); o++; } break;}
case 4: {					//diverge     
	if(l==1&&o==4)
	{ diverge(); o++; }break; }
case 5: {					   
	if(o==5&&(i==1||j==1||k==1||l==1))
                   {		  	
            	a=1;b=1;c=1;d=1;e=1;f=1;g=1;h=1;
	            for(x=0;x<40000;x++);   }break; }
default: break;
} }}
void left()
{
	a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
	for(x=0;x<40000;x++);  g=1;h=0;
 	for(x=0;x<40000;x++); g=0;f=1;
	 for(x=0;x<40000;x++); f=0;e=1; 
	for(x=0;x<40000;x++); e=0;d=1; 
	for(x=0;x<40000;x++); d=0;c=1; 
	for(x=0;x<40000;x++); c=0;b=1; 
	for(x=0;x<40000;x++); b=0;a=1;
 	for(x=0;x<40000;x++);                                   }
 void right()
  {
  a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=0;
	for(x=0;x<40000;x++); b=1;a=0;
 	for(x=0;x<40000;x++); c=1;b=0;
	 for(x=0;x<40000;x++); c=0;d=1; 
	for(x=0;x<40000;x++); d=0;e=1; 
	for(x=0;x<40000;x++); e=0;f=1; 
	for(x=0;x<40000;x++); f=0;g=1; 
	for(x=0;x<40000;x++); g=0;h=1;
 	for(x=0;x<40000;x++);                      	}
	void converge()
	{   
    	a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
	for(x=0;x<40000;x++);  h=0;a=0;b=1;g=1;
 	for(x=0;x<40000;x++); g=0;b=0;c=1;f=1;
	 for(x=0;x<40000;x++); c=0;f=0;d=1;e=1;   }
void diverge()
{
             a=0;b=0;c=0;d=1;e=1;f=0;g=0;h=0;
	for(x=0;x<40000;x++);  d=0;e=0;c=1;f=1;
 	for(x=0;x<40000;x++); g=1;b=1;c=0;f=0;
	 for(x=0;x<40000;x++); b=0;g=0;a=1;h=1;   }

```

### 3. Blinking of multiple LEDs using Keypad Matrix
<p align="center">
  <img width="460" height="300" src="Images/Blinking of Multiple LEDs using Keypad Matrix.JPG">
</p>

```c
#include<reg51.h>
sbit a=P1^0; sbit b=P1^1; sbit c=P1^2; sbit d=P1^3; sbit e=P1^4; sbit f=P1^5; sbit g=P1^6; sbit h=P1^7; sbit i=P2^0; sbit j=P2^1; sbit k=P2^2; sbit l=P2^3; sbit m=P2^4; sbit n=P2^5; sbit o=P2^6; sbit p=P2^7;
void left(); void right(); void converge(); void diverge(); void delay(int t);
void main()
{ P2=0x0F;
while(1)
{ P2=0xFE;
if(m==0)
{ left(); }
if(n==0)
{ right(); }
if(o==0)
{ converge(); }
if(p==0)
{ diverge(); }
P2=0xFD;
if(m==0)
{ left(); }
if(n==0)
{ right(); }
if(o==0)
{ converge(); }
if(p==0)
{ diverge(); }
P2=0xFC;
if(m==0)
{ left(); }
if(n==0)
{ right(); }
if(o==0)
{ converge(); }
if(p==0)
{ diverge(); }
P2=0xFB;
if(m==0)
{ left(); }
if(n==0)
{ right(); }
if(o==0)
{ converge(); }
if(p==0)
{ diverge(); }
P2=0xFA;
if(m==0)
{ left(); }
if(n==0)
{ right(); }
if(o==0)
{ converge(); }
if(p==0)
{ diverge(); } } }
void left()
{
	a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
 	delay(20); g=1;h=0; delay(20); g=0;f=1; delay(20); f=0;e=1;  delay(20);
	e=0;d=1;  delay(20);d=0;c=1; delay(20);c=0;b=1; delay(20);b=0;a=1; delay(20);    }
  void right()
  {
           	a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=0;
 	delay(20); b=1;a=0; delay(20);c=1;b=0; delay(20); 	c=0;d=1; delay(20);d=0;e=1; 
 	delay(20);e=0;f=1; delay(20); f=0;g=1; delay(20);g=0;h=1;delay(20);  }
void converge()
	{
    a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
	delay(20); h=0;a=0;b=1;g=1;delay(20); g=0;b=0;c=1;f=1; delay(20); c=0;f=0;d=1;e=1;  }
void diverge()
{
    	a=0;b=0;c=0;d=1;e=1;f=0;g=0;h=0;
delay(20); d=0;e=0;c=1;f=1; delay(20); g=1;b=1;c=0;f=0; delay(20); b=0;g=0;a=1;h=1;    }
 void delay(int t)
 {
 	unsigned int y,z;
 	for(y=0;y<40000;y++); for(z=0;z<t;z++); }

```

### 4. Display String on LCD

<p align="center">
  <img width="460" height="300" src="Images/Displaying string on LCD.JPG">
</p>

```c

#include<reg51.h>
#define LCD P1
sbit rs=P2^0; sbit rw=P2^1; sbit en=P2^2;
void delay(int x); void call(); void fun();
void main()
{
LCD=0x38; call(); LCD=0x0E; call(); LCD=0x06; call(); LCD=0x80; call(); LCD='H'; fun();
LCD='E'; fun(); LCD='L'; fun(); LCD='L'; fun(); LCD='O'; fun(); LCD='!'; fun(); LCD='!'; fun(); LCD='!'; fun(); LCD=' '; fun(); LCD='H'; fun(); LCD='o'; fun(); LCD='W'; fun(); LCD=' '; fun(); LCD='A'; fun(); LCD='R'; fun(); LCD='E'; fun(); LCD=' '; fun(); LCD=0xC0; call(); LCD='Y'; fun(); LCD='o'; fun(); LCD='U'; fun(); LCD='?'; fun(); LCD='?'; fun();             }
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++); for(j=0;j<x;j++);    }
void call()
{
rs=0;rw=0;en=1; delay(10); en=0;  }
void fun()
{
rs=1;rw=0;en=1; delay(10); en=0;  }

```

### 5. Receive data on LCD using Transmitter and Receiver 

<p align="center">
  <img width="460" height="300" src="Images/Receiving data on LCD using Transmitter and Receiver.JPG">
</p>

```c

#include<reg51.h>
#define LCD P1
sbit rs=P2^0; sbit rw=P2^1; sbit en=P2^2;
void delay(unsigned int x); void fun(); void call();
void main()
{
unsigned char p[5],i;
for(i=0;i<5;i++)
{
TMOD=0x20; TH1=-3; SCON=0x50; TR1=1;
while(RI==0); p[i]=SBUF;
}
RI=0; LCD=0x38; fun(); LCD=0x0E; fun(); LCD=0x06; fun(); LCD=0x80; fun();
for(i=0;i<5;i++)
{
LCD=p[i];  call(); } }
void delay(unsigned int x)
{
unsigned int i,j;
for(i=0;i<1275;i++); for(j=0;j<x;j++);   }
void fun()
{
rs=0;rw=0;en=1; delay(20); en=0;      }
void call()
{
rs=1;rw=0;en=1; delay(20); en=0;	  }

```

### 6. Transmit data using Transmitter Receiver

<p align="center">
  <img width="460" height="300" src="Images/Transmit data using Transmitter and Receiver.JPG">
</p>

```c

#include<reg51.h>
void main()
{
unsigned char a[]={"HEllO"},i;
for(i=0;i<5;i++)
{
TMOD=0x20; TH1=-3; SCON=0x50; SBUF=a[i]; TR1=1; while(TI==0);  }
TI=0;  while(1);  }

```

### 7. Working of Motor

<p align="center">
  <img width="460" height="300" src="Images/Working of Motor.JPG">
</p>

```c

#include<reg51.h>
sbit ip1=P1^0; sbit ip2=P1^1; sbit op1=P2^0; sbit op2=P2^1;
void delay(int x);
void main()
{
unsigned int i;
while(i<200)
{
op1=1;op2=1; delay(30); ip1=0;ip2=0; delay(70); ip1=1;ip2=0; delay(70); ip1=1;ip2=1; delay(70);
ip1=1;ip2=0; delay(30); ip1=1;ip2=0; delay(50); ip1=1;ip2=0; delay(50);     }}
void delay(int x)
{
unsigned int a,b;
for(a=0;a<40000;a++); for(b=0;b<x;b++);  }

```

### 8. Seven Segment Display

<p align="center">
  <img width="460" height="300" src="Images/Seven Segment Display.JPG">
</p>

```c

#include<reg51.h>
#define SSD P1
void delay(int x);
void main()
{
unsigned char i, A[ ]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
for(i=0; i<10;i++)
{
SSD=A[i]; delay(100); }
while(1); 	}
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++); for(j=0;j<x;j++); 	}

```
