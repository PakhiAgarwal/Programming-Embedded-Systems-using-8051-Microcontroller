 #include<reg51.h>
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
void left();
void right();
void converge();
void diverge();
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
           {
            left();
         
            o++;
}	break;  }
case 2: {					//right     
	if(j==1&&o==2)
                   {
       			  right();
   	o++;
}	break;
	}
case 3: {					//converge     
	if(k==1&&o==3)
      {converge();          
  	   o++;
  } break;
  }
case 4: {					//diverge     
	if(l==1&&o==4)
	{
	diverge();
      	o++;
	}break;
	}
case 5: {					   
	if(o==5&&(i==1||j==1||k==1||l==1))
                   {
      
         
		  	
            	a=1;b=1;c=1;d=1;e=1;f=1;g=1;h=1;
	            for(x=0;x<40000;x++);
	
	 }
	 
	break;
	}
default: break;
} }}
void left()
{
	a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
	for(x=0;x<40000;x++);
	 g=1;h=0;
 	for(x=0;x<40000;x++);
	g=0;f=1;
	 for(x=0;x<40000;x++);
	f=0;e=1; 
	for(x=0;x<40000;x++);
	e=0;d=1; 
	for(x=0;x<40000;x++);
	d=0;c=1; 
	for(x=0;x<40000;x++);
	c=0;b=1; 
	for(x=0;x<40000;x++);
	b=0;a=1;
 	for(x=0;x<40000;x++);
	 
	 }
  void right()
  {
           	a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=0;
	for(x=0;x<40000;x++);
	 b=1;a=0;
 	for(x=0;x<40000;x++);
	c=1;b=0;
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
	}
	void converge()
	{
	    
    a=1;b=0;c=0;d=0;e=0;f=0;g=0;h=1;
	for(x=0;x<40000;x++);
	 h=0;a=0;b=1;g=1;
 	for(x=0;x<40000;x++);
	g=0;b=0;c=1;f=1;
	 for(x=0;x<40000;x++);
	c=0;f=0;d=1;e=1; 
	 
	 }
void diverge()
{
	   	
    a=0;b=0;c=0;d=1;e=1;f=0;g=0;h=0;
	for(x=0;x<40000;x++);
	 d=0;e=0;c=1;f=1;
 	for(x=0;x<40000;x++);
	g=1;b=1;c=0;f=0;
	 for(x=0;x<40000;x++);
	b=0;g=0;a=1;h=1; 
	  }




	
	
	
	
	

