//write a programme to input two numbers and calculate remainder when 1st number is divided by 2nd and 2nd is divided by 1st.


#include<stdio.h>
int main()
{
int num1,num2,remainder1,remainder2;
printf("enter the num1=");
scanf("%d",&num1);
printf("enter the num2=");
scanf("%d",&num2);
remainder1=num1%num2;
remainder2=num2%num1;
printf("\n remainder1 of %d and %d is =%d",num1,num2,remainder1);
printf("\n reaminder2 of %d and %d is =%d",num2,num1,remainder2);
return 0;
}
