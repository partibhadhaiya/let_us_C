#include<stdio.h>
int main()
{
 float sal, dearall,houseRent,grossSal;
 printf("enter your salary\n");
 scanf("%f\n", &sal);
 dearall=0.4*sal;
 houseRent=0.2*sal;
 grossSal=sal+dearall+houseRent;
 printf("the gross salary is =%f",grossSal);
}