#include<stdio.h>
#include<conio.h>
int main(){
clrscr();
 float sal,grossSal,dearnessAllowence, houseRent,pf;
 printf("enter your sal\n");
 scanf("f\n",&sal);
 dearnessAllowence=0.4*sal;
 houseRent=0.1*sal;
 pf=0.05*sal;
 grossSal=(dearnessAllowence+houseRent+sal)-pf;
 printf("the salary is %f\n",grossSal);
 getch();
 }