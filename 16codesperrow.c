// write a programme to input distance of object and distance of image from spherical mirror and calculate its focal length.


#include<stdio.h>
int main()
{
int u,v,f;
printf("enter the u=");
scanf("%d",&u);
printf("enter the v=");
scanf("%d",&v);
f=(v*u)/(u-v);
printf("\n f =%d",f);
return 0;
}
