#include<stdio.h>
#include<conio.h>
int main()
{
int amount,rs500,rs100,rs50,rs10,rs5,rs1,totalnote;
printf("\nEnter the amount");
scanf("%d",&amount);
rs500=amount/500;
amount=amount%500;
rs100=amount/100;
amount=amount%100;
rs50=amount/50;
amount=amount%50;
rs10=amount/10;
amount=amount%10;
rs5=amount/5;
amount=amount%5;
rs1=amount/1;
amount=amount%1;
totalnote=rs100+rs500+rs50+rs10+rs5+rs1;
printf("the total notes are %d",totalnote);

getch();

}
