// write a programme to input cost prime and profit percentage calculate its selling price.
#include<stdio.h>
int main()
{
int cp,pp,sp;
printf("enter cp=");
scanf("%d",&cp);
printf("enter pp=");
scanf("%d",&pp);
sp=(((100+pp)/100)*cp);
printf("selling price=%d",sp);
return 0;
}
