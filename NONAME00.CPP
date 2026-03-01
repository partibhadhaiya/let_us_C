#include<stdio.h>
#include<conio.h>
void sum();
void main(){
clrscr();
sum();
getch();
}
void sum(){
int a,b,sum
printf("Enter two no\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("the sum is %d",sum);
}