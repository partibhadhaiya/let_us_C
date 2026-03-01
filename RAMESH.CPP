#include<stdio.h>
#include<conio.h>
int main(){
 float sal,grossSal,dearnessAllowence, houseRent;
 printf("enter your sal\n");
 scanf("f\n",&sal);
 dearnessAllowence=0.4*sal;
 houseRent=0.2*sal;
 grossSal=dearnessAllowence+houseRent+sal;
 printf("the salary is %f\n",grossSal);
 return 0;
 }