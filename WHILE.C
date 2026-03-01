#include<stdio.h>
#include<conio.h>
main()
{
/*1.Enter a no. and count its digit*/
/*
int n;
int x=0;
clrscr();
printf("Enter a no\n");
scanf("%d",&n);
while(n>0){
x=x+1;
n=n/10;
}
printf("The count of digits are %d",x);
*/
/*
2.Enter a no. and find the sum of its digit
*/
/*
int i, sum=0, d;
printf("Enter a no.\n");
scanf("%d",&i);
while(i>0){
d=i%10;
sum=sum+d;
i=i/10;
}

printf("The sum is %d",sum);
*/

/*
3. Enter a digit and find out the reverse.
*/
int i,d,rev=0;
printf("\nEnter any no");
scanf("%d",&i);
while(i>0){
d=i%10;
rev=rev*10+d;
i=i/10;
}
/*5.no in words*/
printf("\n reverse is %d\n",rev);
while(rev>0){
d=rev%10;
if(d==1){
printf("One\t");
}
else if(d==2){
printf("Two\t");
}
else if(d==3){
printf("Three\t");
}
else if(d==4){
printf("Four\t");
}
else if(d==5){
printf("Five\t");
}
else if (d==6){
printf("Six\t");
}
else if(d==7){
printf("Seven\t");
}
else if (d==8){
printf("Eight\t");
}
else if(d==9){
printf("Nine\t");
}
else
{
printf("zero");
}
rev=rev/10;
}

/*4. Enter a no. and check whether it is armstrong or not.*/

/*
int i,d,temp,sum=0;
clrscr();
printf("\Enter a no.");
scanf("%d",&i);
temp=i;
while(i>0)
{
d=i%10;
sum=sum+(d*d*d);
i=i/10;
}
if(sum==temp)
{
printf("\nThe no. is Armstrong");
}
else{
printf("\nThe no. is not an Armstrong no.");
}
*/












getch();
}