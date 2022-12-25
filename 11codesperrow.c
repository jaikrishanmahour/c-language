// write a programme to input length of side of a cube,calculate its volume and total surface area.

#include<stdio.h>
int main()
{
int side,volume,tsa;
printf("enter the side=");
scanf("%d",&side);
volume=side*side*side;
tsa=6*side*side;
printf("\n volume of cube=%d",volume);
printf("\n total surface area=%d",tsa);
return 0;
}
