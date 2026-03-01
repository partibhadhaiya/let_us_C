#include<stdio.h>
#include<conio.h>
main()
{
int i;
for (i=1;i<=200;i++)
{
printf("\n%d",i);
if(i%20==0){
printf("enter any key");
getch();
}
}
}
