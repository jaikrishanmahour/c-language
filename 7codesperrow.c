// write a programme to input radius of circle , calculate its area and circumferece.


#include<stdio.h>
int main()
{
int redius;
float area,circumference,pi=3.14;
printf("enter the redius");
scanf("%d",&redius);
area=pi*redius*redius;
circumference=2*pi*redius;
printf("\n area of circle=%f",area);
printf("\n circumference of circle=%f",circumference);
return 0;
}
