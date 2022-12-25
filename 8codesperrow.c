// write a programme to input length ,breadth of rectangle calculate its area and perimeter .


#include<stdio.h>
int main()
{
int length,breadth;
float area,perimeter;
printf("enter lenght of rectangle=");
scanf("%d",&length);
printf("enter breadth of rectangle=");
scanf("%d",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
printf("\n area of rectangle =%f",area);
printf("\n perimeter of rectangle =%f",perimeter);
return 0;
}
