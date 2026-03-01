#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("\n enter a no. : ");
scanf("%d",&a);
printf("\n enter b no :");
scanf("%d",&b);
a=a+b;
b=a-b;
printf("\n now b is %d", b);
a=a-b;
printf("\n now a is %d", a);
getch();
}