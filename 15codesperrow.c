// write a programme to input temprature in celcius and convert it into kelvin and forenhiet.


#include<stdio.h>
int main()
{
float celcius,kelvin,forenhiet;
printf("enter celcius ");
scanf("%f",&celcius);
kelvin=celcius+273;
forenhiet=(celcius*9/5)+32;
printf("\n kelvin =%f",kelvin);
printf("\n forenhiet =%f",forenhiet);
return 0;
}
