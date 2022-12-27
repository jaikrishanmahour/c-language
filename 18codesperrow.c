// write a programme to input radius and height of a cylindrical calculate its volume csa & tsa.


#include<stdio.h>
int main()
{
int r,h,vlm,csa,tsa,pi=3.14;
printf("enter r= ");
scanf("%d",&r);
printf("enter h=");
scanf("%d",&h);
vlm=pi*r*r*h;
csa=2*pi*r*h;
tsa=2*pi*r*(h+r);
printf("\n volume of cylinder =%d",vlm);
printf("\n curved surface area =%d",csa);
printf("\n total surface area =%d",tsa);
return 0;
}
