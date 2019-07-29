#include<reg51.h>
#include<math.h>
#define LCD P1
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
sbit a=P3^0;
sbit b=P3^1;
sbit c=P3^2;
sbit d=P3^3;
sbit e=P3^4;
sbit f=P3^5;
sbit g=P3^6;
sbit h=P3^7;
void delay(int x);
void call();
void fun();
void add();
void sub();
void mul();
void div();
unsigned int op,k,l;
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
P3=0x0F;
while(1)
{
P3=0xFE;      //first column
if(e==0)
{LCD='7';
fun();}
if(f==0)
{LCD='4';
fun();}
if(g==0)
{LCD='1';
fun();}
if(h==0)
{LCD=' ';
fun();}
P3=0xFD;		  //second column
if(e==0)
{LCD='8';
fun();}
if(f==0)
{LCD='5';
fun();}
if(g==0)
{LCD='2';
fun();}
if(h==0)
{LCD='0';
fun();}
P3=0xFB;         //third column
if(e==0)
{LCD='9';
fun();}
if(f==0)
{LCD='6';
fun();}
if(g==0)
{LCD='3';
fun();}
if(h==0)
{LCD='=';
fun();
if((P3=0xF7)&&(h==0))
{
add();
 }
else if((P3=0xF7)&&(g==0))
 {
 sub();
 }
else if((P3=0xF7)&&(e==0))
{
div();
}
else if((P3=0xF7)&&(f==0))
{
mul();
} 
}	
P3=0xF7;	   //fourth column
if(e==0)
{LCD='/';
fun();
div();
}
if(f==0)
{LCD='x';
fun();
mul();
}
if(g==0)
{LCD='-';
fun();
sub();
}
 if(h==0)
{LCD='+';
fun();
add();
}
}
}
void delay(int x)  											  																																																																									
{
unsigned int i,j;
for(i=0;i<1000;i++)
for(j=0;j<x;j++);
}
void call()
{
rs=0;rw=0;en=1;
delay(10);
en=0;
}
void fun()
{
rs=1;rw=0;en=1;
delay(10);
en=0;
}
void add()
{
op=k+l+0x30;
LCD=op;
}
void sub()
{
op=k-l;
LCD=op;
}
void mul()
{
op=k*l;
LCD=op;
}
void div()
{
op=k/l;
LCD=op;
}