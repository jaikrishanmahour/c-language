// write a programme to input initial velocity(u), acceleration(a) and from a spherical mirror and calculate its final valocity(v) and distance(s).


#include<stdio.h>
int main()
{
int v,u,a,t,s;
printf("enter u= ");
scanf("%d",&u);
printf("enter a=");
scanf("%d",&a);
printf("enter t=");
scanf("%d",&t);
v=u+a*t;
s=u*t+(1/2)*a*t*t;
printf("\n v =%d",v);
printf("\n s =%d",s);
return 0;
}
