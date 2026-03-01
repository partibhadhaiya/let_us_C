#include<stdio.h>
#include<conio.h>
/*void sum(int,int);
void main(){
clrscr();
sum(3,5);
sum(6,8);
getch();
}
void sum(a,b){
int sum;
sum=a+b;
printf("sum is %d\n",sum);
}
*/
/*
void sum();
void main(){
clrscr();
sum();
getch();
}
void sum(){
int a,b,c;
printf("\nEnter two no");
scanf("\n%d\n%d",&a,&b);
c=a+b;
printf("sum is %d",c);
}
*/
/*  WAP A program to print table of a no.*/
void table(int);
void main(){
clrscr();
table(3);
table(6);

getch();
}
void table(x){
int i;
for(i=1;i<=10;i++)
{
 printf("\n%d",i*x);
}
}