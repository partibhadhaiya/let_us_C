#include<stdio.h>
#include<conio.h>
main()
{
/*int x,sum,y,choice;
clrscr();
do{
printf("Enter your two no\n");
scanf("%d%d",&x,&y);

sum=x+y;
printf("%d is the sum",sum);
printf("Enter your choice\n");
scanf("%d",&choice); }
while(choice==0);

/*
/*WAP to do arithmetic operation*//*
int choice,x,y,sum,mul,sub,div,mod,choice2;
clrscr();
printf("enter two no\n");
scanf("%d%d",&x,&y);
do{
printf("enter your choice\n");
scanf("%d",&choice);
if(choice==1){
sum=x+y;
printf("the sum is :%d",sum);
}
else if(choice==2){
sub=x-y;
printf("subtraction of two no is :%d",sub);
}
else if(choice==3){
mul=x*y;
printf("multiplication of two no is %d",mul);
}
else if(choice==4){
div=x/y;
printf("division is :%d",div);
}
else if(choice==5){
mod=x%y;
printf("modulus is:%d",mod);
}
else
{
printf("value is invalid");
}
printf("Enter your choice:want to continue:1 and discontinue==0");
scanf("%d",&choice2);
}while(choice2==1);*/

/*wap to print all possible combination of 123*/
/*int i,j,k;
clrscr();
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++){
for(k=1;k<=3;k++)
{
printf("%d%d%d\t",i,j,k);
}
}
}

*/
/*wap to print prime no from between 1-100*/
/*
int i,j;
clrscr();
for(i=1;i<=100;i++){

 for(j=2;j<=i;j++){
 if(i%j==0)
 {
 break;
 }
 }
 }
if(i==j){
printf("the prime no. are :\n");
printf("%d",i);
}
*/
/*print
1
1
2
3
4
5
8
21...........*/
/*int a=1,b=0,c;
do{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
while(c<=100);
/*increase choice*/
int x,y,r,i,choice=1,action;
printf("\nEnter your 2 no\n");
scanf("%d\n%d\n",&x,&y);
for(i=1;i<40;i++){
printf("*");
}

do{
printf("\nwhat do you want to do?");
printf("\n1.Sum \n2.Subtract \n3.product \n4.Division \n5.Exit");
printf("\nEnter choice..............\n");
scanf("%d",&action);
if(action==1){
r=x+y;
printf("\nSum is %d",r);
}
else if(action==2){
r=x-y;
printf("Subtraction is %d",r);
}
else if(action==3){
r=x*y;
printf("\nProduct is %d",r);
}
else if (action==4){
r=x/y;
printf("\n Division is %d",r);
}
else if(action==5){
choice=0;
}
else{printf("\nchoice is invalid");
}
}while(choice==1);
return 0;


getch();
}