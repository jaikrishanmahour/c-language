// write a programme to input length of base and height of a triangle ,calculate its area.
 
#include<stdio.h>
int main()
{
int base,height,area;
printf("enter the lenght of base = ");
scanf("%d",&base);
printf("enter the height =");
scanf("%d",&height);
area=height*base/2;
printf("\n area of triangle =%d",area);
return 0;
}
