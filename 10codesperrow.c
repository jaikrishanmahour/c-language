// write a programme to input length of side of a square and calculate its area and perimeter .

#include<stdio.h>
int main()
{
int side,area,perimeter;
printf("enter the side of square=");
scanf("%d",&side);
area=side*side;
perimeter=4*side;
printf("\n area of square=%d",area);
printf("\n perimeter of square=%d",perimeter);
return 0;
}
