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
/*
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
} */
/*function to obtain year and decide whether it is leap or not*/
/*void leapyear(int);
int main(){
int year;
clrscr();
printf("Enter a year");
scanf("%d",&year);
leapyear(year);
getch();
}
void leapyear(int year){
if(year%400==0||(year%4==0&&year%100!=0))
{
printf("year is leap year");
}
else{
printf("year is not leap year");
}
}

  */
  /*wap to print the prime factor of a no.*/
void primefactor(int);
void main()
{
int num;
clrscr();
printf("Enter any value");
scanf("%d",&num);
primefactor(num);
getch();
}
void primefactor(int num){
int i=2;
while(num>=i){
while(num%i==0){
 printf("\n%d",i);
 num=num/i;

}
i++;}}



















































































































































































































































































































































































