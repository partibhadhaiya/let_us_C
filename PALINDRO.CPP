#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
clrscr();
int num,num2,d5,d4,d3,d2,d1;
long int num2;
printf("\nEnter your 5 digit no.");
scanf("%d",&num);
d5=num%10;
num=num/10;
d4=num%10;
num=num/10;
d3=num%10;
num=num/10;
d2=num%10;
num=num/10;
d1=num%10;
num2=(d5*10000)+(d4*1000)+(d3*100)+(d2*10)+d1;
printf("\n The reverse is%ld",num2);

getch();
}
