#include<stdio.h>
#include<conio.h>
int main(){
int age;
printf("enter your age");
scanf("%d",&age);
if(age>=18)
{
   if(age<45)
   {
   printf("\n eligible for lic");
   }
   else
   {
   printf("\n not eligible for lic");
   }
}
else
{ printf("not eligible");
}
getch();
}



