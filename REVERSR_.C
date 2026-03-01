#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
 long int num,reverse,sum,d1,d2,d3,d4;
printf("enter your 4 digit no.");

scanf("%ld",num);
d4=num%10;
num=num/10;
d3=num%10;
num=num/10;
d2=num%10;
num=num/10;
d1=num%10;
reverse=d4*1000+d3*100+d2*10+d1;
printf("the reverse of the num is %ld",reverse);
sum=d1+d2+d3+d4;
printf("the sum is %d",sum);
getch();
}