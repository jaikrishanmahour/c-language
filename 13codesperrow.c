// write a programme to input two numbers and swep these numbers using third variable.

 
#include<stdio.h>
int main()
{
int variable1,variable2,variable3;
printf("enter variable1= ");
scanf("%d",&variable1);
printf("enter variable2 =");
scanf("%d",&variable2);
printf("\n value of variable1=%d",variable1);
printf("\n value of variable2=%d",variable2);
variable3=variable1;
variable1=variable2;
variable2=variable3;
printf("\n \n value of variable1 =%d",variable1);
printf("\n \n value of variable2 =%d",variable2);
return 0;
}
