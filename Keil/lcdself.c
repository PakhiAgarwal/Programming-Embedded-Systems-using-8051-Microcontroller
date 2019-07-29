#include<reg51.h>
#define LCD P1
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
sbit a=P1^0;
sbit b=P1^0;
sbit c=P1^0;
sbit d=P1^0;
sbit e=P1^0;
sbit f=P1^0;
sbit g=P1^0;
sbit h=P1^0;
void delay(int x);
void call();
void fun();
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
LCD='P';
fun();
b='A';LCD=b	;
fun();
 c='K';	   LCD=c;
fun();
d='H';		 LCD=d;
fun();
e='I';			   LCD=e;
fun();
}
void delay(int x)
{
unsigned int i,j;
for(i=0;i<40000;i++);
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