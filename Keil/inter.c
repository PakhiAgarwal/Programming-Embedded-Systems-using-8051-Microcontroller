#include<reg51.h>
sbit a=P1^0;
void main()
{
IE=0x81;
a=1;

}
void cr()interrupt 0
{
a=0;
}