// write a programme to input length breadth and height of a cuboid, and calculate its volume and total surface area.


#include<stdio.h>
int main()
{
int length,breadth,hieght,volume,tsa;
printf("enter the length=");
scanf("%d",&length);
printf("enter the breadth=");
scanf("%d",&breadth);
printf("enter the hieght=");
scanf("%d",&hieght);
volume=length*breadth*hieght;
tsa=2*((length*breadth)+(breadth*hieght)+(hieght*length));
printf("\n volume of cuboid=%d",volume);
printf("\n total surface area=%d",tsa);
return 0;
}
