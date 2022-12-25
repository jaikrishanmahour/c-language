/* write a programme to input two numbers, 
and calculate quotient when 1st number is divided by 2nd number 
and 2nd number is divided by 1st.*/

#include<stdio.h>
int main()
{
int num1,num2,quotient1,quotient2;
printf("enter the num1=");
scanf("%d",&num1);
printf("enter the num2=");
scanf("%d",&num2);
quotient1=num1/num2;
quotient2=num2/num1;
printf("\n quotient1 of %d and %d is =%d",num1,num2,quotient1);
printf("\n quotient2 of %d and %d is =%d",num2,num1,quotient2);
return 0;
}
