#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int sub1, sub2, sub3, sub4, sub5,sum,average;

printf("\n enter your marks of 5 subject:");
scanf(" %d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
sum=sub1+sub2+sub3+sub4+sub5;
printf("\n sum of marks %d", sum);
average=sum/5;
printf("\n the average of marks is %d", average);
getch();
}

