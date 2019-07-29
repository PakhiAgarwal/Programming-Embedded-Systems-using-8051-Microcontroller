#include<reg51.h>
#define LCD P1
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
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
LCD='H';
fun();
LCD='E';
fun();
LCD='L';
fun();
LCD='L';
fun();
LCD='O';
fun();
LCD='!';
fun();
LCD='!';
fun();
LCD='!';
fun();
LCD=' ';
fun();
LCD='H';
fun();
LCD='o';
fun();
LCD='W';
fun();
LCD=' ';
fun();
LCD='A';
fun();
LCD='R';
fun();
LCD='E';
fun();
LCD=' ';
fun();
LCD=0xC0;
call();
LCD='Y';
fun();
LCD='o';
fun();
LCD='U';
fun();
LCD='?';
fun();
LCD='?';
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